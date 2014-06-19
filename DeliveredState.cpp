#include "DeliveredState.h"
#include <iostream>

using namespace std;

DeliveredState::DeliveredState(Pizza* pizza) : PizzaState(pizza)
{
}

void DeliveredState::bake()
{
    cout << "Can't bake pizza already delivered" << endl;
}

void DeliveredState::deliver()
{
    cout << "Can't deliver pizza already delivered" << endl;
}

DeliveredState::~DeliveredState()
{
}

