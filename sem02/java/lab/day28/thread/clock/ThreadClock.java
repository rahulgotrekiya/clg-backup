import java.util.*;

class Time extends Thread {
    public void run() {
        int second=0;
        try {
            while(true) {
                Date date = new Date();
                System.out.println(date.getHours() + ":" + date.getMinutes() + ":" + date.getSeconds());
                Thread.sleep(1000);
            }
        } catch(InterruptedException e) {
            System.out.print(e);
        }
    }
}

class ThreadClock {
    public static void main(String args[]) {
        Time t1 = new Time();
        t1.start();

    }
}