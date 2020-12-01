// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#ifndef FACTORY_CHALLENGER_H
#define FACTORY_CHALLENGER_H

#include "factory_Dodge.h"

class ChallengerFactory : public DodgeCarFactory
{
public:
    Engine *createEngine();
    Wheel *createWheel();
};

#endif