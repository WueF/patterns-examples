//
// Created by WueF on 09.06.2017.
//

#include "Milk.h"

Milk::Milk(Beverage *baseBeverage) : BeverageAddition(baseBeverage){ }

Beverage* Milk::Base() const {
    return BeverageAddition::Base();
}

Milk::~Milk() {}

float Milk::Price() const {
    return Base()->Price() + 0.25f;
}

std::string Milk::Name() const {
    return Base()->Name() + ", milk";
}