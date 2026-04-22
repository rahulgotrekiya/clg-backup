class BankAccount {
    int balance = 1000;

    synchronized void deposit(int amount) {     // lock
        balance += amount;
        System.out.println("Deposited: " + amount);
        System.out.println("Balance: " + balance);
    }

    synchronized void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Deposited: " + amount);
            System.out.println("Balance: " + balance);
        } else {
            System.out.println("Insufficient balance");
        }
    }
}


class DepositThread extends Thread {
    BankAccount acc;

    DepositThread(BankAccount acc) {
        this.acc = acc;
    }

    public void run(){
        acc.deposit(500);
    }
}


class WithdrawThread extends Thread {
    BankAccount acc;
    
    WithdrawThread(BankAccount acc) {
        this.acc = acc;
    }

    public void run(){
        acc.withdraw(200);
    }
}

class Bank {
    public static void main(String [] args) {

        BankAccount account = new BankAccount();

        DepositThread deposit = new DepositThread(account);
        WithdrawThread withdraw = new WithdrawThread(account);

        deposit.start();
        withdraw.start();
        
    }
}