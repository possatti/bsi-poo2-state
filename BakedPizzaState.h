#ifndef BAKEDPIZZASTATE_H
#define	BAKEDPIZZASTATE_H

#include "PizzaState.h"

class Pizza;

class BakedPizzaState : public PizzaState
{
public:
    BakedPizzaState();
    virtual void bake(Pizza* pizza) const;
    virtual void deliver(Pizza* pizza) const;
    virtual ~BakedPizzaState();
};

#endif	/* BAKEDPIZZASTATE_H */

