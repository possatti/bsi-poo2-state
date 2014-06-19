#ifndef COOKEDPIZZASTATE_H
#define	COOKEDPIZZASTATE_H

#include "PizzaState.h"

class CookedPizzaState : public PizzaState
{
public:
    CookedPizzaState(Pizza* pizza);
    virtual void bake();
    virtual void deliver();
    virtual ~CookedPizzaState();
};

#endif	/* COOKEDPIZZASTATE_H */

