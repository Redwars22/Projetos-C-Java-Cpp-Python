import java.awt.Color;
import java.awt.Font;
import java.awt.event.*;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JLabel;

public class Main {
    public static void main(String[] args) {
        final String baseURL = "https://api.whatsapp.com/send?phone=";
        Color appGreen = new Color(11, 66, 26);
        Color dartGreen = new Color(35, 117, 57);

        //Instanciar elementos
        JFrame frame = new JFrame("Criador de Link WhatsApp em Java");
        JButton generateLinkButton = new JButton();
        JTextField getPhoneNumber = new JTextField();
        JTextArea getMessage = new JTextArea();
        ImageIcon whatsIconPath = new ImageIcon("resx/whatsapplogo.png");
        JLabel whatsIcon = new JLabel(whatsIconPath);
        JLabel appTitle = new JLabel();
        JLabel phoneNumberLabel = new JLabel();
        JLabel messageLabel = new JLabel();
        JLabel urlLabel = new JLabel();
        JTextField urlField = new JTextField();

        //Configurar janela e torná-la visível
        frame.setSize(370, 580);
        frame.setVisible(true);
        frame.getContentPane().setBackground(appGreen);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setResizable(false);

        //Posicionar e redimensionar objetos
        whatsIcon.setBounds(100, 10, 165, 165);
        appTitle.setBounds(20, 195, 500, 20);
        phoneNumberLabel.setBounds(10, 225, 500, 40);
        messageLabel.setBounds(10, 285, 500, 20);
        getPhoneNumber.setBounds(10, 255, 350, 25);
        getMessage.setBounds(10, 315, 350, 100);
        generateLinkButton.setBounds(115, 500, 130, 20);
        urlField.setBounds(10, 445, 350, 25);
        urlLabel.setBounds(10, 420, 130, 20);

        //Parâmetros dos elementos
        appTitle.setText("GERADOR DE LINK WHATSAPP");
        appTitle.setForeground(dartGreen);
        appTitle.setFont(new Font(Font.SANS_SERIF, Font.BOLD, 18));
        getPhoneNumber.setBackground(dartGreen);
        getPhoneNumber.setFont(new Font(Font.SANS_SERIF, Font.BOLD, 15));
        getPhoneNumber.setForeground(Color.WHITE);
        getMessage.setBackground(dartGreen);
        getMessage.setFont(new Font(Font.SANS_SERIF, Font.BOLD, 15));
        getMessage.setForeground(Color.WHITE);
        generateLinkButton.setText("GERAR LINK");
        generateLinkButton.setBackground(dartGreen);
        generateLinkButton.setForeground(Color.WHITE);
        phoneNumberLabel.setForeground(Color.WHITE);
        phoneNumberLabel.setText("Insira o telefone (no formato (42)99999-9999:");
        messageLabel.setForeground(Color.WHITE);
        messageLabel.setText("Insira a mensagem:");
        urlLabel.setForeground(Color.WHITE);
        urlLabel.setText("URL:");
        urlField.setForeground(Color.WHITE);
        urlField.setBackground(dartGreen);
        urlField.setFont(new Font("Serif", Font.BOLD, 15));

        //Adicionar itens à janela
        frame.add(whatsIcon);
        frame.add(appTitle);
        frame.add(getPhoneNumber);
        frame.add(generateLinkButton);
        frame.add(getMessage);
        frame.add(phoneNumberLabel);
        frame.add(messageLabel);
        frame.add(urlField);
        frame.add(urlLabel);
        frame.setLayout(null);

        //Funcionalidade do botão OBTER LINK
        generateLinkButton.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                urlField.setText(
                    baseURL + getPhoneNumber.getText() + "&text=" +
                    getMessage.getText().replaceAll(" ", "%20")
                );
            }
        });
    }
}