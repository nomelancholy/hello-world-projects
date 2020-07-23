package chapter12.practice;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class Test {

    public static void main(String[] args) {

        Client lee = new Client("이순신",40,100);
        Client kim = new Client("김유신",20,100);
        Client hong = new Client("홍길동",13,50);

        List<Client> clients = new ArrayList<>();

        clients.add(lee);
        clients.add(kim);
        clients.add(hong);

        // 이름
        clients.stream().forEach(c -> System.out.println(c.getName()));

        // 총비용
        int total = clients.stream().mapToInt(c -> c.getCost()).sum();
        System.out.println(total);

        // 20세 이상인 고객 이름 순서대로
        clients.stream().filter(c -> c.getAge() >= 20).map(c -> c.getName()).sorted().forEach(s -> System.out.println(s));


    }

}
