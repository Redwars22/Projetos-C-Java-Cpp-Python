/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula06;

import static java.lang.Integer.parseInt;

/**
 *
 * @author redwars22
 */
public class Age {
    private int birthYear;
    public String currentYear = "2022";
    
    public int getCurrentYear(){
        return parseInt(this.currentYear);
    }
    
    private int calculateAge(){
        return getCurrentYear() - this.birthYear;
    }
    
    public void setBirthYear(int birthYear){
        this.birthYear = birthYear;
    }
    
    public int getAgeByTheEndOfTheYear(){
        return calculateAge();
    }
}
