class Thread1 implements Runnable {
    public void run() {
        try {
            while(true) {
                System.out.println("Thread 1....");
                Thread.sleep(1000);
            }
        } catch(InterruptedException e) {
            System.out.print(e);
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        System.out.println("Thread 2....");
    }
}

class RunnableDemo {
    public static void main(String args[]) {
        Thread t;
        Thread1 t1 = new Thread1();
        t = new Thread(t1);
        t.start();

        Thread2 t2 = new Thread2();
        t2.start();
    }
}