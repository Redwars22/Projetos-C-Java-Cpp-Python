/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula05;

import java.awt.Toolkit;
import java.util.Date;

/**
 *
 * @author André Pereira, RA 21006223
 */
public class SystemStats {
    Date date = new Date();
    
    private String dateTime;
    private String language;
    private String resolution;
    
    private String getDateTime(){
        this.dateTime = date.toString();
        return this.dateTime;
    }
    
    private String getSystemLanguage(){
        this.language = System.getProperty("user.language");
        return this.language;
    }
    
    private String getScreenResolution(){
        this.resolution = Toolkit.getDefaultToolkit().getScreenSize().toString();
        return this.resolution;
    }
    
    public String getSystemInfo(){
        return (
            "Data e Hora: " + getDateTime() + 
            "\nIdioma: " + getSystemLanguage() + 
            "\nResolução:" + getScreenResolution()
        );
    }
}
