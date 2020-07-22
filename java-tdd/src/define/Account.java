package define;

public class Account {

	int balance;
	
	public Account(int money) {
		// TODO Auto-generated constructor stub
		this.balance = money;
	}
	
	public int getBalance() {
		// TODO Auto-generated method stub
		return balance;
	}

	public void deposit(int money) {
		// TODO Auto-generated method stub
		balance += money;
	}

	public void withdraw(int money) {
		// TODO Auto-generated method stub
		balance -= money;
	}


}
