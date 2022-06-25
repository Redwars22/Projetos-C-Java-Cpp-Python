/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.leoandrew.aula12;

import javax.swing.JOptionPane;

/**
 *
 * @author redwars22
 */
public class Aula12 {

    public static void main(String[] args) {
        int n, total = 0, sum = 0, evenNumbers = 0, oddNumbers = 0, largerThan100 = 0, average = 0;
        
        do {
            n = Integer.parseInt(
                    JOptionPane.showInputDialog(
                        null, 
                        "<html><strong>Digite um número aqui (ou 0 para encerrar)<strong></html>"
                    )
            );
            
            if(n != 0){
                sum += n;
                
                //Verifica se é par ou ímpar
                if(n % 2 == 0) evenNumbers++;
                else oddNumbers++;
                
                //Verifica se é maior que 100
                if(n > 100) largerThan100++;
                
                total++;
            }
        } while(n != 0);
        
        average = sum/total;
        
        String message = "Total de números: " + total +
                         "\nPares: " + evenNumbers + 
                         "\nÍmpares: " + oddNumbers + 
                         "\nMaiores que 100: " + largerThan100 +
                         "\nMédia: " + average;
        
        JOptionPane.showMessageDialog(null, message);        
    }
}
