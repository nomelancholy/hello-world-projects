package org.example;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

public class CalculatorServiceTest {
    CalculatorService calculatorService;

    @Before
    public void init() {
        this.calculatorService = new CalculatorService();
    }

    @Test
    public void plus() throws Exception {
        int value1 = 10;
        int value2 = 5;

        int result = calculatorService.plus(value1, value2);

        Assert.assertEquals(15, result);
    }

    @Test
    public void divide() throws Exception {
        int value1 =10;
        int value2 = 5;

        int result = calculatorService.divide(value1, value2);

        Assert.assertEquals(2, result);

    }

    @Test
    public void divideExceptionTest() throws Exception{
        int value1 = 10;
        int value2 = 0;

        try {
            calculatorService.divide(value1, value2);
        }catch (ArithmeticException ae){
            Assert.assertTrue(true); // 이부분이 실행되었다면 성공
            return; // 메소드를 더이상 실행하지 않는다.
        }
        Assert.fail();
    }

}
