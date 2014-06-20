#include "BakedPizzaState.h"
#include "Pizza.h"
#include <iostream>

using namespace std;

BakedPizzaState::BakedPizzaState()
{
}

void BakedPizzaState::bake(Pizza* pizza) const
{
    cout << "Can't bake a pizza already baked" << endl;
}

void BakedPizzaState::deliver(Pizza* pizza) const
{
    cout << "Delivering the pizza..." << endl;
    pizza->setState(pizza->getDeliveredState());
}

BakedPizzaState::~BakedPizzaState()
{
}

