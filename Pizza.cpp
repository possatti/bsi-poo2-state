#include "Pizza.h"
#include "CookedPizzaState.h"
#include "BakedPizzaState.h"
#include "DeliveredState.h"

Pizza::Pizza() :
cookedState(new CookedPizzaState()),
bakedState(new BakedPizzaState()),
deliveredState(new DeliveredState())
{
    this->state = cookedState;
}

void Pizza::bake()
{
    this->state->bake(this);
}

void Pizza::deliver()
{
    this->state->deliver(this);
}

const PizzaState* Pizza::getBakedState()
{
    return this->bakedState;
}

const PizzaState* Pizza::getDeliveredState()
{
    return this->deliveredState;
}

const PizzaState* Pizza::getCookedState()
{
    return this->cookedState;
}

void Pizza::setState(const PizzaState* state)
{
    this->state = state;
}

Pizza::~Pizza()
{
}

