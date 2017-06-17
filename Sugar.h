//
// Created by WueF on 17.06.2017.
//

#ifndef INTERNSHIP_PATTERNS_SUGAR_H
#define INTERNSHIP_PATTERNS_SUGAR_H

#include "BeverageAddition.h"

class Sugar : public BeverageAddition{

public:
    Sugar(Beverage* baseBeverage);
    virtual ~Sugar();

    virtual float Price() const;
    virtual std::string Name() const;

protected:
    virtual Beverage* Base() const;

};


#endif //INTERNSHIP_PATTERNS_SUGAR_H
