package array;

public class ArrayMethod {

	public static void main(String[] args) {

		int[] temp = { 1, 2, 3, 4 };

		test(temp);

		for (int i : temp) {
			System.out.println(i);
		}

	}

	private static void test(int[] temp) {

		for (int i = 0; i < temp.length - 1; i++) {

			int forSwap = temp[i + 1];
			temp[i + 1] = temp[i];
			temp[i] = forSwap;

		}

	}

}
