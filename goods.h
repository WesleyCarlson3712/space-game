#ifndef GOODS_H
#define GOODS_H

#include <iostream>
using namespace std;

class Goods {
    public:
    Goods() {}
    Goods(string name, int price, int quantity) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    string name = "";
    int price = 0;
    int quantity = 0;
    
};

#endif // GOODS_H