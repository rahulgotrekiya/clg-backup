import java.util.*;

class StudyThread extends Thread {  // Extending the Thread class
    public void run() {
       for(int i = 1; i<=5; i++) {
        System.out.println("Student is studying...");
        try {
            Thread.sleep(1000);     // Simulating time taken to study
        } catch (InterruptedException e) {
            System.out.println("Study inturrupted !");
        }
       }
    }
}

class MusicThread implements Runnable { // interface Runnable 
    public void run() {
       for(int i = 1; i<=5; i++) {
        System.out.println("Student is Listening music...");
        try {
            Thread.sleep(800);   // Simulating time taken to listen 
        } catch (InterruptedException e) {
            System.out.println("Music inturrupted !");
        }
       }
    }
}

class StudentMusic {
    public static void main(String args[]) {
        StudyThread study = new StudyThread();

        // MusicThread m = new MusicThread();
        Thread music = new Thread(new MusicThread());

        // Start both threads
        study.start();
        music.start();
    }
}