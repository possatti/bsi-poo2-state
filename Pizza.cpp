#include "Pizza.h"
#include "CookedPizzaState.h"
#include "BakedPizzaState.h"
#include "DeliveredState.h"

Pizza::Pizza()
{
    this->cookedState = new CookedPizzaState(this);
    this->bakedState = new BakedPizzaState(this);
    this->deliveredState = new DeliveredState(this);
    this->state = cookedState;
}

void Pizza::bake()
{
    this->state->bake();
}

void Pizza::deliver()
{
    this->state->deliver();
}

PizzaState* Pizza::getBakedState()
{
    return this->bakedState;
}

PizzaState* Pizza::getDeliveredState()
{
    return this->deliveredState;
}

PizzaState* Pizza::getCookedState()
{
    return this->cookedState;
}

void Pizza::setState(PizzaState* state)
{
    this->state = state;
}

Pizza::~Pizza()
{
}

