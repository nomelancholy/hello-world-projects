package kr.or.connect.dao;

import kr.or.connect.dto.Meeting;
import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.RowMapper;
import org.springframework.jdbc.core.namedparam.NamedParameterJdbcTemplate;
import org.springframework.stereotype.Repository;

import javax.sql.DataSource;
import java.util.Collections;
import java.util.List;
import static kr.or.connect.dao.MeetingsDaoSqls.*;

@Repository
public class MeetingsDao {
    private NamedParameterJdbcTemplate jdbc;
    private RowMapper<Meeting> rowMapper = BeanPropertyRowMapper.newInstance(Meeting.class);

    public MeetingsDao(DataSource dataSource) {
        this.jdbc = new NamedParameterJdbcTemplate(dataSource);
    }

    public List<Meeting> selectAll() {
        return jdbc.query(SELECT_ALL, Collections.emptyMap(), rowMapper);
    }
}
