#include "BakedPizzaState.h"
#include "Pizza.h"
#include <iostream>

using namespace std;

BakedPizzaState::BakedPizzaState(Pizza* pizza) : PizzaState(pizza)
{
}

void BakedPizzaState::bake()
{
    cout << "Can't bake a pizza already baked" << endl;
}

void BakedPizzaState::deliver()
{
    cout << "Delivering the pizza..." << endl;
    this->pizza->setState(pizza->getDeliveredState());
}

BakedPizzaState::~BakedPizzaState()
{
}

