/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula25;

/**
 *
 * @author redwars22
 */
public class Reptil extends Animal {
    private String corEscama;

    public String getCorEscama() {
        return corEscama;
    }

    public void setCorEscama(String corEscama) {
        this.corEscama = corEscama;
    }
    
    @Override
    public void locomover(){
        System.out.println("rastejando");
    }
        
    @Override
    public void alimentar(){
        System.out.println("comendo vegetais");
    }
    
    @Override
    public void emitirSom(){
        System.out.println("som de réptil");
    }
}
