package org.example;

import org.springframework.stereotype.Component;

@Component
public class CalculatorService {

    public int plus(int value1, int value2) {
        return value1 + value2;
    }

    public int divide(int value1, int value2) {
        return value1 / value2;
    }
}