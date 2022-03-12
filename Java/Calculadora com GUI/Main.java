import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

import java.awt.event.*;

public class Main {
    public static void main(String[] args){
        //Definir elementos
        JFrame frame = new JFrame();
        JButton button = new JButton();
        JLabel label = new JLabel();
        JTextField field = new JTextField();

        //Criar janela
        frame.setSize(400, 400);
        frame.setVisible(true);
        frame.setTitle("Project Sheltera");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //Posicionar elementos na janela
        button.setBounds(100, 100, 150, 25);
        label.setBounds(10, 10, 100, 10);
        field.setBounds(300, 300, 100, 25);

        //Adicionar elementos à janela
        frame.add(button);
        frame.add(label);
        frame.add(field);
        frame.setLayout(null);

        button.setText("CLICK ME");
        button.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                 label.setText(field.getText());
            }
        });
    }
}