package chapter12.practice;


public class Client {

    public Client(String name, int age, int cost) {
        this.name = name;
        this.age = age;
        this.cost = cost;
    }

    String name;
    int age;
    int cost;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getCost() {
        return cost;
    }

    public void setCost(int cost) {
        this.cost = cost;
    }

    @Override
    public String toString() {
        return "Client{" +
                "name='" + name + '\'' +
                ", age=" + age +
                ", cost=" + cost +
                '}';
    }
}
