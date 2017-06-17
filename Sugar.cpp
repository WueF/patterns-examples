//
// Created by WueF on 17.06.2017.
//

#include "Sugar.h"

Sugar::Sugar(Beverage *baseBeverage) : BeverageAddition(baseBeverage){ }

Beverage* Sugar::Base() const {
    return BeverageAddition::Base();
}

Sugar::~Sugar() {}

float Sugar::Price() const {
    return Base()->Price() + 0.55f;
}

std::string Sugar::Name() const {
    return Base()->Name() + ", sugar";
}