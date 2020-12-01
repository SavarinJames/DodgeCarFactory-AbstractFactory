// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#ifndef FACTORY_DODGE_H
#define FACTORY_DODGE_H

#include "header.h"
#include "product.h"

class DodgeCarFactory
{
protected:
public:
    virtual Engine *createEngine() = 0;
    virtual Wheel *createWheel() = 0;
};

#endif