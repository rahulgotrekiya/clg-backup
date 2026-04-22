import java.util.Scanner;

class ChatSender implements Runnable{
    private Scanner scanner;
    private String userName;

    public ChatSender(String userName, Scanner scanner) {
        this.userName = userName;
        this.scanner = scanner;
    }

    public void run() {
        while(true) {
            synchronized (scanner) {    
                System.out.print(userName + " (Send): ");
                String message = scanner.nextLine();
                if(message.equalsIgnoreCase("bye")) {
                    System.out.println(userName + " has left the chat.");
                    System.exit(0);
                }      
            }
            try{
                Thread.sleep(500);
            }
            catch (InterruptedException e){
                System.out.println(userName + " was interrupted.");
            }
        }
    }
}

class ChatReceiver implements Runnable{
    private Scanner scanner;
    private String userName;

    public ChatReceiver(String userName, Scanner scanner) {
        this.userName = userName;
        this.scanner = scanner;
    }

    public void run() {
        while(true) {
            synchronized (scanner) {    
                System.out.print(userName + " (Reply): ");
                String message = scanner.nextLine();
                if(message.equalsIgnoreCase("exit")) {
                    System.out.println(userName + " has left the chat.");
                    System.exit(0);
                }      
            }
            try{
                Thread.sleep(500);
            }
            catch (InterruptedException e){
                System.out.println(userName + " was interrupted.");
            }
        }
    }
}

class ChatApp {
    public static void main(String[] args) {
        System.out.println("Two-Way Chat Started! Type 'exit' to stop.");

        Scanner scanner = new Scanner(System.in);
        Thread sender = new Thread(new ChatSender("Abhijeet", scanner));
        Thread receiver = new Thread(new ChatReceiver("Dr. Tarika", scanner));

        sender.start();
        receiver.start();
    }
}

