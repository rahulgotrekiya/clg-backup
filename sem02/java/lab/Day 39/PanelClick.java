import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class PanelClick
{
    public static void main(String args[])
    {
        JFrame frame = new JFrame("Click Demo");
        JPanel panel = new JPanel();
        //panel.setLayout(new GridLayout(3,1));
        panel.setLayout(new BorderLayout());

        JLabel label = new JLabel("Demo");
        JTextField txt = new JTextField();
        JButton btn = new JButton("OK");

        panel.add(label,BorderLayout.NORTH);
        panel.add(txt,BorderLayout.CENTER);
        panel.add(btn,BorderLayout.SOUTH);
        panel.setSize(300,300);
        frame.setSize(500,150);

        frame.add(panel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        btn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e)
            {
                String color = txt.getText().toString().toUpperCase();
                label.setText(color);
                label.setFont(new Font("Verdana",Font.BOLD,18));
                if(color.equalsIgnoreCase("red"))
                    label.setForeground(Color.RED);
                else if(color.equalsIgnoreCase("blue"))
                    label.setForeground(Color.BLUE);
                else if(color.equalsIgnoreCase("green"))
                    label.setForeground(Color.GREEN);
                else
                    label.setForeground(Color.BLACK);
            }
        });
        frame.setVisible(true);
    }
}