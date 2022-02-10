#ifndef PUDGE_H
#define PUDGE_H

#include "unit.h"

class pudge : public Unit{
public:
    pudge();
    void MeatHook(Unit&);
};

#endif // PUDGE_H
