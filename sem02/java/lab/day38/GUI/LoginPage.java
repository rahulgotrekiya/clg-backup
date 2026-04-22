import javax.swing.*;
import java.awt.*;

public class LoginPage {
    public static void main(String args[]) {
        JFrame frame = new JFrame("Simple Swing Design");     
        frame.setLayout(null);
        frame.setSize(400, 400);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Header
        JLabel labelHeader = new JLabel("Student Details");
        labelHeader.setBounds(120, 10, 300, 30);
        labelHeader.setFont(new Font("Georgia", Font.BOLD, 20));
        labelHeader.setForeground(Color.MAGENTA);
        frame.add(labelHeader);

        // Username
        JLabel labelName = new JLabel("Enter Username:");
        labelName.setBounds(50, 50, 120, 30);
        JTextField txtName = new JTextField();
        txtName.setBounds(160, 50, 120, 30);
        frame.add(labelName);
        frame.add(txtName);

        // Address
        JLabel labelAddr = new JLabel("Enter Address:");
        labelAddr.setBounds(50, 110, 120, 30);
        frame.add(labelAddr);

        JTextArea txtAddr = new JTextArea(20, 20);
        JScrollPane scrollPane = new JScrollPane(txtAddr);
        scrollPane.setBounds(160, 110, 120, 35);
        frame.add(scrollPane);

        // Hobbies
        JLabel labelHobbies = new JLabel("Select Hobbies:");
        labelHobbies.setBounds(50, 170, 120, 30);
        frame.add(labelHobbies);
        
        JCheckBox Hobby1 = new JCheckBox("Cooking");
        frame.add(Hobby1);

        Hobby1.setBounds(160, 170, 80, 30);
        JCheckBox Hobby2 = new JCheckBox("Cricket");
        Hobby2.setBounds(250, 170, 80, 30);
        frame.add(Hobby2);

        // Gender
        JLabel labelGender = new JLabel("Gender:");
        labelGender.setBounds(50, 220, 120, 30);
        frame.add(labelGender);
        
        JRadioButton male = new JRadioButton("Male", true);
        male.setBounds(160, 220, 80, 30);
        frame.add(male);

        JRadioButton female = new JRadioButton("Female", false);
        female.setBounds(250, 220, 80, 30);
        frame.add(female);

        ButtonGroup bg = new ButtonGroup();
        bg.add(male);
        bg.add(female);

        // Button
        JButton button = new JButton("Submit");
        button.setBounds(140, 270, 120, 30);
        frame.add(button);
    }
}