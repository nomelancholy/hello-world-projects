package com.fastcampus.javaallinone.project3.springbootinfomanage.service;

import com.fastcampus.javaallinone.project3.springbootinfomanage.domain.Block;
import com.fastcampus.javaallinone.project3.springbootinfomanage.domain.Person;
import com.fastcampus.javaallinone.project3.springbootinfomanage.repository.BlockRepository;
import com.fastcampus.javaallinone.project3.springbootinfomanage.repository.PersonRepository;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import javax.transaction.Transactional;
import java.util.List;
import java.util.stream.Collectors;

@Service
@Slf4j
public class PersonService {
    @Autowired
    private PersonRepository personRepository;

    public List<Person> getPeopleExcluedBlocks(){
//        List<Person> people = personRepository.findAll();
//
//        return people.stream().filter(person -> person.getBlock() == null ).collect(Collectors.toList());
        return personRepository.findByBlockIsNull();
    }

    public Person getPerson(Long id) {
        Person person = personRepository.findById(id).get();

        log.info("person : {}", person);

        return person;
    }

    public List<Person> getPeopleByName(String name) {
//        List<Person> people = personRepository.findAll();
//
//        return people.stream().filter(person -> person.getName().equals(name)).collect(Collectors.toList());
        return personRepository.findByName(name);
    }
}
