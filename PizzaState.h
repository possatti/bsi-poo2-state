#ifndef PIZZASTATE_H
#define	PIZZASTATE_H

class Pizza;

class PizzaState
{
public:
    PizzaState(Pizza* pizza);
    virtual void bake() = 0;
    virtual void deliver() = 0;
    virtual ~PizzaState();
protected:
    Pizza* pizza;
};

#endif	/* PIZZASTATE_H */

