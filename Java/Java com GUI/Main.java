import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.text.JTextComponent;

import java.awt.event.*;

public class Main {
    public static void main(String[] args){
        int x, y, result;

        //Definir elementos
        JFrame frame = new JFrame();
        JButton add = new JButton("+");
        JButton subtract = new JButton("-");
        JButton times = new JButton("*");
        JButton divide = new JButton("/");
        JTextField num1 = new JTextField();
        JTextField num2 = new JTextField();
        JLabel total = new JLabel("RESULTADO");

        //Criar janela
        frame.setSize(400, 400);
        frame.setVisible(true);
        frame.setTitle("Project Sheltera");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //Posicionar elementos na janela
        add.setBounds(120, 300, 44, 44);
        subtract.setBounds(170, 300, 44, 44);
        times.setBounds(220, 300, 44, 44);
        divide.setBounds(270, 300, 44, 44);
        num1.setBounds(120, 150, 75, 35);
        num2.setBounds(220, 150, 75, 35);
        total.setBounds(150, 240, 75, 75);

        //Adicionar elementos à janela
        frame.add(add);
        frame.add(subtract);
        frame.add(times);
        frame.add(divide);
        frame.add(num1);
        frame.add(num2);
        frame.add(total);
        frame.setLayout(null);

        /*button.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                 label.setText(field.getText());
            }
        });*/

        add.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                x = (int) num1.getText();
                y = (int) num2.getText();
                total = x + y;
                total.setText(total.toString());
            }
        });
    }
}