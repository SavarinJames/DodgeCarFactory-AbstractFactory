// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#ifndef FACTORY_DURANGO_H
#define FACTORY_DURANGO_H

#include "factory_Dodge.h"

using namespace std;

class DurangoFactory : public DodgeCarFactory
{
public:
    Engine *createEngine();
    Wheel *createWheel();
};

#endif