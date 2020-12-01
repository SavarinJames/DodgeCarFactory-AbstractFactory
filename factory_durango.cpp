// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#include "factory_durango.h"

using namespace std;

Engine *DurangoFactory::createEngine()
{
    Engine *pE = new DurangoEngine;
    return pE;
}

Wheel *DurangoFactory::createWheel()
{
    Wheel *pW = new DurangoWheel;
    return pW;
}