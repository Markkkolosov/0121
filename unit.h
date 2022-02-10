#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string.h>
using namespace std;
class Unit {
public:
    char name [20];
    int health;
    int damage;
    Unit();
    Unit(char n[20], int h, int d);
    void attack(Unit&);
};

#endif // UNIT_H
