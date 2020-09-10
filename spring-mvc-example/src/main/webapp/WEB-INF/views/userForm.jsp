<%--
  Created by IntelliJ IDEA.
  User: starm
  Date: 2020-09-10
  Time: 오후 2:45
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>userForm</title>
</head>
<body>
<form action="/regist" method="post">
    <input type="text" name="name" placeholder="name">
    <input type="text" name="email" placeholder="email">
    <input type="text" name="age" placeholder="age">
    <button type="submit">전송</button>
</form>
</body>
</html>
