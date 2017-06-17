#include <iostream>
#include "Coffee.h"
#include "Milk.h"
#include "Sugar.h"

int main() {
    Coffee* coffee = new Coffee();
    Milk* milkedCoffee = new  Milk(coffee);

    std::cout<<milkedCoffee->Price()<<std::endl;
    std::cout<<milkedCoffee->Name()<<std::endl;

    Sugar sugar(milkedCoffee);

    std::cout<<sugar.Name()<<" Price: "<<sugar.Price()<<std::endl;



    return 0;
}