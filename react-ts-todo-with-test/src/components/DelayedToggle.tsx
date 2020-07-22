import React, { useState } from "react";

const DelayedToggle = () => {
  const [toggle, setToggle] = useState(false);

  const handleToggle = () => {
    setTimeout(() => {
      setToggle(!toggle);
    }, 1000);
  };

  return (
    <div>
      <button onClick={handleToggle}>toggle</button>
      <div>
        상태: <span>{toggle ? "ON" : "OFF"}</span>
      </div>
      {toggle && <div>hello</div>}
    </div>
  );
};

export default DelayedToggle;
