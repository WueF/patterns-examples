//
// Created by WueF on 08.06.2017.
//
#ifndef INTERNSHIP_PATTERNS_BEVERAGE_H
#define INTERNSHIP_PATTERNS_BEVERAGE_H

#include <string>


class Beverage {

public:
    virtual std::string Name() const = 0;
    virtual float Price() const = 0;
    virtual ~Beverage() {};

};


#endif //INTERNSHIP_PATTERNS_BEVERAGE_H
