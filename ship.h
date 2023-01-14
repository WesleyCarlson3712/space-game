#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <iomanip>
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

    void printShipStats() {
        cout << "Name:     " << name     << endl;
        cout << "Health:   " << health   << endl;
        cout << "Speed:    " << speed    << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Crew      " << crew     << endl;
        cout << "Armour:   " << armour   << endl;
        cout << "Money:    " << money    << endl;
    }

    int getInt(int min, int max) {
        int number = 0;
        bool invalid = false;

        do{
            cin >> number;
            invalid = (number < min || number > max || cin.fail());

            if(invalid) {
                cout << "dont be stupid, stupid head" <<endl;
                cin.clear();
                cin.ignore(10000,'\n');
            }

        } while(invalid);

        return number;
}

};

#endif // SHIP_H