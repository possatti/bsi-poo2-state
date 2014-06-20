#ifndef BAKEDPIZZASTATE_H
#define	BAKEDPIZZASTATE_H

#include "PizzaState.h"

class Pizza;

class BakedPizzaState : public PizzaState
{
public:
    BakedPizzaState();
    virtual void bake(Pizza* pizza);
    virtual void deliver(Pizza* pizza);
    virtual ~BakedPizzaState();
};

#endif	/* BAKEDPIZZASTATE_H */

