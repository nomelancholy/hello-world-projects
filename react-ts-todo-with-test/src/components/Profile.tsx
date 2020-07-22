import React, { useState } from "react";

interface Props {
  userName: string;
  name: string;
}

const Profile = ({ userName, name }: Props) => {

    const [inputText, setInputText] = useState('')

 const handleChange = (e:any) => {
     setInputText(e.target.value)
 }


  return (
    <div>
        <input type="text" onChange={handleChange} value={inputText} placeholder="anything"/>
      <span>
        <b>{userName}</b>
      </span>
      <span>{name}</span>
    </div>
  );
};

export default Profile;
