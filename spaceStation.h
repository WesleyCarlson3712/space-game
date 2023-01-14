#ifndef SPACESTATION_H
#define SPACESTATION_H

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "goods.h"

class SpaceStation {
    public:
    SpaceStation() {}
    string name = "";
    Goods goods;
    vector<Goods*> wears = {
        new Goods("Laser Guns", 25, 30),
        new Goods("Oxygen Masks", 15, 50),
        new Goods("Food", 8, 150),
        new Goods("Cows", 60, 10),
        new Goods("Venus Fly Traps", 13, 15) 
    };

    void printWears() {
        cout << setw(15) << "Item" << setw(10) << "Price" << setw(10) << "Quantity" << endl;
        cout << "---------------------------------------------------------\n";
        for(int i = 0; i < wears.size(); i++) {
            cout << setw(15) << wears[i]->name << setw(10) << wears[i]->price << setw(10) << wears[i]->quantity << endl;
        }
    }

    void buyStuff() {
        
    }
};

#endif // SPACESTATION_H