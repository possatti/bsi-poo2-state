#include "CookedPizzaState.h"
#include "Pizza.h"
#include <iostream>

using namespace std;

CookedPizzaState::CookedPizzaState(Pizza* pizza) : PizzaState(pizza)
{
}

void CookedPizzaState::bake()
{
    cout << "Baking the pizza..." << endl;
    pizza->setState(pizza->getBakedState());
}

void CookedPizzaState::deliver()
{
    cout << "Can't deliver a pizza not baked yet" << endl;
}

CookedPizzaState::~CookedPizzaState()
{
}

