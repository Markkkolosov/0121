#include "nikita.h"

Nikita::Nikita() {
    strcpy(this->name, "Nikita");
    this->health = 190;
    this->damage = 32;

}

void Nikita::freeze(pudge &enemy) {
    int uron = this->damage * 1.8;
    //изменяем кол-во здоровья в врага
    enemy.health -= uron;
    //выводим сообщение
    cout <<this->name <<"kysaet" << enemy.name
        <<" i nanosit " << uron << " urona!" << endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
