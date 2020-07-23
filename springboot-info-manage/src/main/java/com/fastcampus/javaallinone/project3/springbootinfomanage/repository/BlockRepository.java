package com.fastcampus.javaallinone.project3.springbootinfomanage.repository;


import com.fastcampus.javaallinone.project3.springbootinfomanage.domain.Block;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

public interface BlockRepository extends JpaRepository<Block, Long> {
}
