package kr.co.fastcampus.eatgo.interfaces;

import org.springframework.web.bind.annotation.RestController;

import kr.co.fastcampus.eatgo.domain.MenuItem;
import kr.co.fastcampus.eatgo.domain.Restaurant;
import kr.co.fastcampus.eatgo.domain.RestaurantRepository;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;


@RestController
public class RestaurantController {

    @Autowired
    private RestaurantRepository repository;

    @GetMapping(value="/restaurants")
    public List<Restaurant> list(){

        List<Restaurant> restaurants = repository.findAll();

        return restaurants;
    }

    @GetMapping(value = "/restaurants/{id}")
    public Restaurant deatil(@PathVariable("id") Long id){

        Restaurant restaurant = repository.findById(id);

        restaurant.addMenuItem(new MenuItem("Kimchi"));

        return restaurant;
    }

}