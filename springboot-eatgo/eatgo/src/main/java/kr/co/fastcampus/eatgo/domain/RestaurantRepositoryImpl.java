package kr.co.fastcampus.eatgo.domain;

import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Component;

@Component
public class RestaurantRepositoryImpl implements RestaurantRepository {

    private final List<Restaurant> restaurants = new ArrayList<>();

    public RestaurantRepositoryImpl() {
        restaurants.add(new Restaurant(1004L, "Bob zip", "Seoul"));
        restaurants.add(new Restaurant(2020L, "Cyber Food", "Seoul"));
    }

    public List<Restaurant> findAll() {

        return restaurants;
    }

    public Restaurant findById(final Long id) {

        return restaurants.stream().filter(r -> r.getId().equals(id)).findFirst().orElse(null);
    
    }
}