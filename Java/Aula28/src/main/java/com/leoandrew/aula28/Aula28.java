/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.leoandrew.aula28;

/**
 *
 * @author redwars22
 */
public class Aula28 {

    public static void main(String[] args) {
        Video v[] = new Video[3];
        v[0] = new Video("Título 1");
        v[1] = new Video("Título 2");
        v[2] = new Video("Título 3");
        
        Gafanhoto g[] = new Gafanhoto[2];
        g[0] = new Gafanhoto("Vinicius", 22, "M", "21006223");
        g[1] = new Gafanhoto("Marcelo", 19, "M", "21006224");
        
        System.out.println(g[0].toString());
        System.out.println(g[1].toString());
    }
}
