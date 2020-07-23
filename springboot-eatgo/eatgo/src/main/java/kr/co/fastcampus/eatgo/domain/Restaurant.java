package kr.co.fastcampus.eatgo.domain;

import java.util.ArrayList;
import java.util.List;

public class Restaurant {

	private String name;
	private String address;
	private Long id;
	private List<MenuItem> menuItems = new ArrayList<MenuItem>();

	public Restaurant(String name) {
		this.name = name;
	}

	public Restaurant(Long id, String name, String address) {
		this.id = id;
		this.name = name;
		this.address = address;
	}

	public Long getId(){
		return id;
	}

	public String getName() {
		return name;
	}

	public Object getAddress() {
		return address;
	}

	public Object getInformation() {
		return name + " in " + address;
	}

	public List<MenuItem> getMenuItems(){
		return menuItems;
	}

	public void addMenuItem(MenuItem menuItem) {
		menuItems.add(menuItem);
	}

}
