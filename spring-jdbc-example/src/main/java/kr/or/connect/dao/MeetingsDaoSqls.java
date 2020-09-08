package kr.or.connect.dao;

public class MeetingsDaoSqls {
    public static final String SELECT_ALL = "SELECT * FROM meetings";
    public static final String SELECT_BY_ID = "SELECT *  FROM meetings WHERE id = :id";
    public static final String UPDATE = "UPDATE meetings SET video_link = :videoLink where id = :id";
    public static final String DELETE_BY_ID = "DELETE FROM meetings WHERE id = :id";

}
