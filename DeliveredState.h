#ifndef DELIVEREDSTATE_H
#define	DELIVEREDSTATE_H

#include "PizzaState.h"

class Pizza;

class DeliveredState : public PizzaState
{
public:
    DeliveredState();
    virtual void bake(Pizza* pizza);
    virtual void deliver(Pizza* pizza);
    virtual ~DeliveredState();
private:

};

#endif	/* DELIVEREDSTATE_H */

