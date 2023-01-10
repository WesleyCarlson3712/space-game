#ifndef SHIP_H
#define SHIP_H

#include <iostream>
using namespace std;

class Ship {
public:
    Ship() {}

    Ship(string name, int health, int speed, int capacity, int crew, int armour, int money){

        this->name = name;
        this->health = health;
        this->speed = speed;
        this->capacity = capacity;
        this->armour = armour;
        this->money = money;
    }
    
    string name = "noname";
    int health = 0;
    int speed = 0;
    int capacity = 0;
    int crew = 0;
    int armour = 0;
    int money = 0;
};

#endif // SHIP_H