import javax.swing.*;

public class SimpleSwing {
    public static void main(String args[]) {
        // 1. Create the main window (Frame)
        JFrame frame = new JFrame("Simple Swing Design");     

        // 2. Set the window size (width, height)
        frame.setSize(400, 300);

        // 3. Close the application when the window is closed
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // 4. Remove default layout to position components manually 
        frame.setLayout(null);
        
        // 5. Make the window visible
        frame.setVisible(true);

        // 6. Create a button without any listner
        JButton button = new JButton("Click here!");

        // 7. Set button positiona and size (x, y, width, height)
        button.setBounds(50, 100, 120, 40);

        // 8. Add the button directly to the frame
        frame.add(button);

        // Cancel button 
        JButton btnCancel = new JButton("Cancel");
        btnCancel.setBounds(200, 100, 120, 40);

        frame.add(btnCancel);

        frame.setVisible(true);
    }
}