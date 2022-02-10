#include <QCoreApplication>
#include "unit.h"
#include "pudge.h"
#include "nikita.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Unit u1;
    pudge u2;
    Nikita u3;

    u1.attack(u2);
    u2.MeatHook(u1);
    u3.freeze(u2);

    return a.exec();
}
