//
// Created by WueF on 09.06.2017.
//

#ifndef INTERNSHIP_PATTERNS_MILK_H
#define INTERNSHIP_PATTERNS_MILK_H


#include "BeverageAddition.h"

class Milk : public BeverageAddition{

public:
    Milk(Beverage* baseBeverage);
    virtual ~Milk();

    virtual float Price() const;
    virtual std::string Name() const;

protected:
    virtual Beverage* Base() const;

};


#endif //INTERNSHIP_PATTERNS_MILK_H
