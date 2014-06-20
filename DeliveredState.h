#ifndef DELIVEREDSTATE_H
#define	DELIVEREDSTATE_H

#include "PizzaState.h"

class Pizza;

class DeliveredState : public PizzaState
{
public:
    DeliveredState();
    virtual void bake(Pizza* pizza) const;
    virtual void deliver(Pizza* pizza) const;
    virtual ~DeliveredState();
};

#endif	/* DELIVEREDSTATE_H */

