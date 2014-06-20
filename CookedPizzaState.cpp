#include "CookedPizzaState.h"
#include "Pizza.h"
#include <iostream>

using namespace std;

CookedPizzaState::CookedPizzaState()
{
}

void CookedPizzaState::bake(Pizza* pizza)
{
    cout << "Baking the pizza..." << endl;
    pizza->setState(pizza->getBakedState());
}

void CookedPizzaState::deliver(Pizza* pizza)
{
    cout << "Can't deliver a pizza not baked yet" << endl;
}

CookedPizzaState::~CookedPizzaState()
{
}

