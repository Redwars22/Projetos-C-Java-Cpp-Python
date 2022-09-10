/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula28;

/**
 *
 * @author redwars22
 */
public class Gafanhoto extends Person {
    private String login;
    private int watchedVideos;
    
    public Gafanhoto(String name, int age, String sex, String login){
        super(name, sex, age);
        this.login = login;
        this.watchedVideos = 0;
    }
    
    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public int getWatchedVideos() {
        return watchedVideos;
    }

    public void setWatchedVideos(int watchedVideos) {
        this.watchedVideos = watchedVideos;
    }

    @Override
    public String toString() {
        return "Gafanhoto{" + "login=" + login + ", watchedVideos=" + watchedVideos + '}';
    }
}
