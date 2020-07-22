package control;

import java.util.Scanner;

public class DoWhileExam {
	
	public static void main(String[] args) {
		
		int value = 0;
		Scanner scanner = new Scanner(System.in);
		
		do {
			
			value = scanner.nextInt();
			System.out.println(value);
			
		} while (value != 10);
		
	}

}
