package kr.or.connect.dao;

import kr.or.connect.dto.Meeting;
import org.springframework.dao.EmptyResultDataAccessException;
import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.RowMapper;
import org.springframework.jdbc.core.namedparam.BeanPropertySqlParameterSource;
import org.springframework.jdbc.core.namedparam.NamedParameterJdbcTemplate;
import org.springframework.jdbc.core.namedparam.SqlParameterSource;
import org.springframework.jdbc.core.simple.SimpleJdbcInsert;
import org.springframework.stereotype.Repository;

import javax.sql.DataSource;
import java.util.Collections;
import java.util.List;
import java.util.Map;

import static kr.or.connect.dao.MeetingsDaoSqls.*;

@Repository
public class MeetingsDao {
    private NamedParameterJdbcTemplate jdbc;
    private SimpleJdbcInsert insertAction;
    private RowMapper<Meeting> rowMapper = BeanPropertyRowMapper.newInstance(Meeting.class);

    public MeetingsDao(DataSource dataSource) {
        this.jdbc = new NamedParameterJdbcTemplate(dataSource);
        this.insertAction = new SimpleJdbcInsert(dataSource).withTableName("meetings");
    }

    public List<Meeting> selectAll() {
        return jdbc.query(SELECT_ALL, Collections.emptyMap(), rowMapper);
    }

    public Meeting selectById(Integer id) {
        try {
            Map<String, ?> params = Collections.singletonMap("id", id);
            return jdbc.queryForObject(SELECT_BY_ID, params, rowMapper);
        } catch (EmptyResultDataAccessException e) {
            return null;
        }
    }

    public int insert(Meeting meeting) {
        SqlParameterSource params = new BeanPropertySqlParameterSource(meeting);
        return insertAction.execute(params);
    }

    public int update(Meeting meeting) {
        SqlParameterSource params = new BeanPropertySqlParameterSource(meeting);
        return jdbc.update(UPDATE, params);
    }

    public int delete(Integer id) {
        Map<String, ?> params = Collections.singletonMap("id", id);
        return jdbc.update(DELETE_BY_ID, params);
    }

}
