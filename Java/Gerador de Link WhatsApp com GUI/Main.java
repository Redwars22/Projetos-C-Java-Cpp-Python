import java.awt.Color;
import java.awt.Font;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JTextPane;
import javax.swing.JLabel;

public class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Criador de Link WhatsApp em Java");
        JButton generateLinkButton = new JButton();
        JTextField getPhoneNumber = new JTextField();
        JTextArea getMessage = new JTextArea();
        ImageIcon whatsIconPath = new ImageIcon("resx/whatsapplogo.png");
        JLabel whatsIcon = new JLabel(whatsIconPath);
        JLabel appTitle = new JLabel();

        frame.setSize(600, 400);
        frame.setVisible(true);
        frame.getContentPane().setBackground(Color.BLACK);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setResizable(false);
       /* generateLinkButton.setBounds(10, 10, 100, 100);
        frame.add(generateLinkButton);*/

        whatsIcon.setBounds(10, 10, 165, 165);
        appTitle.setBounds(10, 195, 300, 20);
        appTitle.setText("GERADOR DE LINK WHATSAPP");
        appTitle.setForeground(Color.GREEN);
        appTitle.setFont(new Font("Serif", Font.PLAIN, 25));
        frame.add(whatsIcon);
        frame.add(appTitle);
        frame.setLayout(null);
    }
}