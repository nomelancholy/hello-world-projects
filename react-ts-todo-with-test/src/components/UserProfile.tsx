import React, { useState, useEffect } from "react";
import axios from "axios";
import { UserProfileModel } from "../model/UserProfileModel";

interface Params {
  id: number;
}

const UserProfile = ({ id }: Params) => {
  const [userData, setUserData] = useState<UserProfileModel | null>(null);
  const [loading, setLoading] = useState(false);
  const getUser = async (id: number) => {
    setLoading(true);
    try {
      const response = await axios.get(
        `https://jsonplaceholder.typicode.com/users/${id}`
      );
      setUserData(response.data);
    } catch (error) {
      console.log("error", error);
    }
    setLoading(false);
  };

  useEffect(() => {
    getUser(id);
  }, [id]);
  return loading ? (
    <div> loading.. </div>
  ) : (
    <>
      <p>
        <b>Username :</b>
        {userData?.username}
      </p>
      <p>
          <b>Email :</b>
          {userData?.email}
      </p>
    </>
  );
};

export default UserProfile;
