package com.fastcampus.javaallinone.project3.springbootinfomanage.domain;

import javax.persistence.*;
import javax.validation.Valid;

import com.fastcampus.javaallinone.project3.springbootinfomanage.domain.dto.Birthday;
import lombok.*;

import java.time.LocalDate;

/**
 * Person
 */
@Entity
@NoArgsConstructor
@AllArgsConstructor
@RequiredArgsConstructor
@Data
public class Person {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;    

    @NonNull
    private String name;

    @NonNull
    private int age;

    private String hobby;

    @NonNull
    private String bloodType;

    private String address;

    @Valid
    @Embedded
    private Birthday birthday;

    private String job;

    @ToString.Exclude
    private String phoneNumber;

    //@OneToOne(cascade =  {CascadeType.PERSIST, CascadeType.MERGE, CascadeType.REMOVE })
    @OneToOne(cascade = CascadeType.ALL, orphanRemoval = true)
    private Block block;

}