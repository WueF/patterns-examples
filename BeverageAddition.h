//
// Created by WueF on 09.06.2017.
//

#ifndef INTERNSHIP_PATTERNS_BEVERAGEADDITION_H
#define INTERNSHIP_PATTERNS_BEVERAGEADDITION_H


#include "Beverage.h"

class BeverageAddition : public Beverage {

public:

    virtual float Price() const = 0;
    virtual std::string Name() const = 0;

    virtual ~BeverageAddition(){
        delete _baseBeverage;
    }
protected:
    BeverageAddition(Beverage* baseBeverage){
        _baseBeverage = baseBeverage;

    };

    virtual Beverage* Base() const {
        return _baseBeverage;
    }

private:
    Beverage* _baseBeverage;

};


#endif //INTERNSHIP_PATTERNS_BEVERAGEADDITION_H
