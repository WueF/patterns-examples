//
// Created by WueF on 16.06.2017.
//

#ifndef INTERNSHIP_PATTERNS_COFFEE_H
#define INTERNSHIP_PATTERNS_COFFEE_H


#include "Beverage.h"

class Coffee : public Beverage{
    virtual float Price() const{
        return 1.25;
    }

    virtual std::string Name() const{
        return "Coffee";
    }

};


#endif //INTERNSHIP_PATTERNS_COFFEE_H
