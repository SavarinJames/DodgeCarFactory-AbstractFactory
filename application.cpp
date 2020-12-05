// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#include "application.h"

using namespace std;

void application(int choice)
{
    DodgeCarFactory *pFactory = nullptr;
    Engine *pE = nullptr;
    Wheel *pW = nullptr;

    if (choice == 1)
        pFactory = new ChallengerFactory;
    else
        pFactory = new DurangoFactory;

    pE = pFactory->createEngine();
    pW = pFactory->createWheel();

    pE->displayEngine();
    pW->displayWheel();

    delete pW;
    delete pE;
    delete pFactory;
}