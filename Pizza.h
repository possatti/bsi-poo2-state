#ifndef PIZZA_H
#define	PIZZA_H

#include "PizzaState.h"


class PizzaState;

class Pizza
{
public:
    Pizza();
    PizzaState* getCookedState();
    PizzaState* getBakedState();
    PizzaState* getDeliveredState();
    void bake();
    void deliver();
    void setState(PizzaState* state);
    virtual ~Pizza();
private:
    PizzaState *cookedState, *bakedState, *deliveredState, *state;
};

#endif	/* PIZZA_H */

