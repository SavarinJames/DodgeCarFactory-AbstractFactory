// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#include "factory_challenger.h"

using namespace std;

Engine *ChallengerFactory::createEngine()
{
    Engine *pE = new ChallengerEngine;
    return pE;
}

Wheel *ChallengerFactory::createWheel()
{
    Wheel *pW = new ChallengerWheel;
    return pW;
}