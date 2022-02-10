#include "pudge.h"

pudge::pudge() {
    strcpy(this->name, "Pudge");
    this->health = 150;
    this->damage = 8;

}

void pudge::MeatHook(Unit &enemy) {
    int uron = this->damage * 1.8;
    //изменяем кол-во здоровья в врага
    enemy.health -= uron;
    //выводим сообщение
    cout <<this->name <<"hukaet" << enemy.name
        <<" i nanosit " << uron << " urona!" << endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
