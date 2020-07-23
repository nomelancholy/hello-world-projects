package kr.co.fastcampus.eatgo.domain;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

public class RestaurantTests {

	@Test
	public void creation() {
		Restaurant restaurant = new Restaurant(1004L, "Bob zip", "Seoul");

		assertEquals(restaurant.getId(),1004L);
		assertEquals(restaurant.getAddress(),"Seoul");
		assertEquals(restaurant.getName(),"Bob zip");
	}

	@Test
	public void information(){
		Restaurant restaurant = new Restaurant(1004L, "Bob zip","Seoul");
		assertEquals(restaurant.getInformation(),"Bob zip in Seoul");
	}
	
}
