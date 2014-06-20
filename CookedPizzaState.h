#ifndef COOKEDPIZZASTATE_H
#define	COOKEDPIZZASTATE_H

#include "PizzaState.h"

class CookedPizzaState : public PizzaState
{
public:
    CookedPizzaState();
    virtual void bake(Pizza* pizza);
    virtual void deliver(Pizza* pizza);
    virtual ~CookedPizzaState();
};

#endif	/* COOKEDPIZZASTATE_H */

