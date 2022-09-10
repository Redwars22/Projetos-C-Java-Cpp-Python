/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.leoandrew.aula28;

/**
 *
 * @author redwars22
 */
public abstract class Person {
    protected String name, sex;
    protected int age;
    protected float experience;

    public Person(String name, String sex, int age) {
        this.name = name;
        this.sex = sex;
        this.age = age;
        this.experience = 0;
    }

    
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public int getAge() {
        return age;
    }

    public void setAgr(int age) {
        this.age = age;
    }

    public float getExperience() {
        return experience;
    }

    public void setExperience(float experience) {
        this.experience = experience;
    }

    @Override
    public String toString() {
        return "Person{" + "name=" + name + ", sex=" + sex + ", age=" + age + ", experience=" + experience + '}';
    }
}
