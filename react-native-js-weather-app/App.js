import React, { useState, useEffect } from 'react';
import Loading from "./Loading";
import * as Location from "expo-location";
import { Alert } from 'react-native';
import axios from 'axios';


export default function App() {

  const [isLoading, changeState] = useState(true);

  getWeather = async (lat, lon) => {
    // const API_KEY = 삭제
    const { data } = await axios.get(
      `https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&appid=${API_KEY}&units=metric`
    );
    console.log(data);
  },
    geoLocation = async () => {
      try {
        await Location.requestPermissionsAsync();
        const {
          coords: { latitude, longitude }
        } = await Location.getCurrentPositionAsync();
        this.getWeather(latitude, longitude);
      } catch (error) {
        Alert.alert("Can't find you", "So sad");
      }
    }

  useEffect(() => {
    geoLocation();
  }, [])

  return (
    <Loading />
  );
}