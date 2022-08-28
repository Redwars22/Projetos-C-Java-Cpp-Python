/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula25;

/**
 *
 * @author redwars22
 */
public class Mamifero extends Animal {
     private String corPelo;

    public String getCorPelo() {
        return corPelo;
    }

    public void setCorPelo(String corPelo) {
        this.corPelo = corPelo;
    }
    
    @Override
    public void locomover(){
        System.out.println("caminhando");
    }
        
    @Override
    public void alimentar(){
        System.out.println("mamando");
    }
    
    @Override
    public void emitirSom(){
        System.out.println("som do mamífero");
    }
}
