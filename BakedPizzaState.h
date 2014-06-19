#ifndef BAKEDPIZZASTATE_H
#define	BAKEDPIZZASTATE_H

#include "PizzaState.h"

class Pizza;

class BakedPizzaState : public PizzaState
{
public:
    BakedPizzaState(Pizza* pizza);
    virtual void bake();
    virtual void deliver();
    virtual ~BakedPizzaState();
};

#endif	/* BAKEDPIZZASTATE_H */

