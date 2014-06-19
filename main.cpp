#include <cstdlib>

#include "Pizza.h"

using namespace std;

int main(int argc, char** argv)
{
    Pizza* pizza = new Pizza;

    pizza->deliver();
    pizza->bake();
    pizza->bake();
    pizza->deliver();
    pizza->deliver();

    return 0;
}

