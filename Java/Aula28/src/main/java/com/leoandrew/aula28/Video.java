/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula28;

import java.util.logging.Logger;

/**
 *
 * @author redwars22
 */
public class Video implements VideoActions{
    private String title;
    private int rating, views, likes;
    private boolean isPlaying;

    public Video(String title) {
        this.title = title;
        this.rating = 1;
        this.views = 0;
        this.likes = 0;
        this.isPlaying = false;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public int getRating() {
        return rating;
    }

    public void setRating(int rating) {
        this.rating = rating;
    }

    public int getViews() {
        return views;
    }

    public void setViews(int views) {
        this.views = views;
    }

    public int getLikes() {
        return likes;
    }

    public void setLikes(int likes) {
        this.likes = likes;
    }

    public boolean isPlaying() {
        return isPlaying;
    }

    public void setPlaying(boolean isPlaying) {
        this.isPlaying = isPlaying;
    }

    @Override
    public void play() {
        this.setPlaying(true);
    }

    @Override
    public void pause() {
        this.setPlaying(false);
    }

    @Override
    public void like() {
        this.likes++;
    }

    @Override
    public String toString() {
        return "Video{" + "title=" + title + ", rating=" + rating + ", views=" + views + ", likes=" + likes + ", isPlaying=" + isPlaying + '}';
    }
    
    
}
