#include "DeliveredState.h"
#include <iostream>

using namespace std;

DeliveredState::DeliveredState()
{
}

void DeliveredState::bake(Pizza* pizza)
{
    cout << "Can't bake pizza already delivered" << endl;
}

void DeliveredState::deliver(Pizza* pizza)
{
    cout << "Can't deliver pizza already delivered" << endl;
}

DeliveredState::~DeliveredState()
{
}

