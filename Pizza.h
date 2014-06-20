#ifndef PIZZA_H
#define	PIZZA_H

#include "PizzaState.h"


class PizzaState;

class Pizza
{
private:
    const PizzaState * const cookedState;
    const PizzaState * const bakedState;
    const PizzaState * const deliveredState;
    const PizzaState *state;
public:
    Pizza();
    const PizzaState* getCookedState();
    const PizzaState* getBakedState();
    const PizzaState* getDeliveredState();
    void bake();
    void deliver();
    void setState(const PizzaState* state);
    virtual ~Pizza();
};

#endif	/* PIZZA_H */

