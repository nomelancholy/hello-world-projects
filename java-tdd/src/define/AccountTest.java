package define;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;

public class AccountTest {

	// 기능 요구 사항
	// 잔고 조회가 가능해야 한다
	// 입금과 출금을 관리할 수 있어야 한다
	// 예상 복리 이자를 구할 수 있어야 한다 ( 추가 개발 추정 )

	// 1. 계좌를 생성한다 -> 계좌가 정상적으로 생성됐는지 확인한다

	private Account account;
	
	@Before
	public void setup() {
		account = new Account(10000);
	}
	
	@Test
	public void testAccount() throws Exception {
	}
	
	@Test
	public void testGetBalance() throws Exception {
		assertEquals(10000, account.getBalance());

		account = new Account(1000);
		assertEquals(1000, account.getBalance());

		account = new Account(0);
		assertEquals(0, account.getBalance());

	}

	@Test
	public void testDeposit() {
		account.deposit(1000);
		assertEquals(11000, account.getBalance());
	}

	@Test
	public void testWithdraw() {
		account.withdraw(1000);
		assertEquals(9000, account.getBalance());
	}

}
