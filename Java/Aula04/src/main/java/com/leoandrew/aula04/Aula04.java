/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.leoandrew.aula04;

import java.awt.Toolkit;
import java.util.Date;

/**
 *
 * @author André Pereira Justiniano, RA 21006223, Engenharia de Software
 */
public class Aula04 {

    public static void main(String[] args) {
        Date clock = new Date();
        
        System.out.println("Hello World!");
        System.out.println("A hora atual é: " + clock.toString());
        System.out.println("A resolução do sistema é: " + Toolkit.getDefaultToolkit().getScreenSize().toString());
        System.out.println("O idioma do sistema é: " + System.getProperty("user.language"));
    }
}
