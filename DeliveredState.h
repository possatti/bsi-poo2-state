#ifndef DELIVEREDSTATE_H
#define	DELIVEREDSTATE_H

#include "PizzaState.h"

class Pizza;

class DeliveredState : public PizzaState
{
public:
    DeliveredState(Pizza* pizza);
    virtual void bake();
    virtual void deliver();
    virtual ~DeliveredState();
private:

};

#endif	/* DELIVEREDSTATE_H */

