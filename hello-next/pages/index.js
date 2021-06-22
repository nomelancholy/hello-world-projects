import Head from "next/head";
import Image from "next/image";
import styles from "../styles/Home.module.css";
import { NaverMap, Marker, RenderAfterNavermapsLoaded } from "react-naver-maps";

export default function Home() {
  const key = process.env.api_key;

  return (
    <div className={styles.container}>
      {" "}
      <RenderAfterNavermapsLoaded
        clientId={key}
        error={<p>err</p>}
        loading={<p>loading</p>}
      >
        <NaverMap
          id="react-naver-maps"
          styles={{ width: "100%", heigt: "100vh" }}
        />
      </RenderAfterNavermapsLoaded>
    </div>
  );
}
