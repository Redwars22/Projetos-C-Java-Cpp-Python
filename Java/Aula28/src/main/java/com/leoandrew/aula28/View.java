/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula28;

/**
 *
 * @author redwars22
 */
public class View {
    private Gafanhoto viewer;
    private Video video;

    public View(Gafanhoto viewer, Video video) {
        this.viewer = viewer;
        this.video = video;
        this.viewer.setWatchedVideos(this.viewer.getWatchedVideos() + 1);
        this.video.setViews(this.video.getViews() + 1);
    }
    
    public Gafanhoto getViewer() {
        return viewer;
    }

    public void setViewer(Gafanhoto viewer) {
        this.viewer = viewer;
    }

    public Video getVideo() {
        return video;
    }

    public void setVideo(Video video) {
        this.video = video;
    }

    @Override
    public String toString() {
        return "View{" + "viewer=" + viewer + ", video=" + video + '}';
    }
    
    public void rate(){
        this.video.setRating(5);
    }
    
    public void rate(int rating){
        this.video.setRating(rating);
    }
    
    public void rate(float percent){
        if(percent <= 20){
            this.video.setRating(3);
        } else if(percent <= 50){
            this.video.setRating(5);
        } else if(percent <= 90){
            this.video.setRating(8);
        } else {
            this.video.setRating(10);
        }
    }
}
