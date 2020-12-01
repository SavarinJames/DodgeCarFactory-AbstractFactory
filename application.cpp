// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#include "application.h"

using namespace std;

void application()
{
    cout << "Well come to Dodge Car Factory!\n";
    system("pause");
    cout << "What kind of car do you desire?\n";
    cout << "[1]. Dodge Challenger\n[2]. Dodge Durango\n[3]. Exit\n";
    cout << "Enter your choice (1 --> 2): ";
    int choice;
    DodgeCarFactory *pFactory = nullptr;
    Engine *pE = nullptr;
    Wheel *pW = nullptr;
    cin >> choice;
    if (choice != 1 && choice != 2)
    {
        cout << "Thanks for coming!\n";
        return;
    }
    if (choice == 1)
        pFactory = new ChallengerFactory;
    else
        pFactory = new DurangoFactory;
    pE = pFactory->createEngine();
    pW = pFactory->createWheel();

    pE->displayEngine();
    cout << endl;
    pW->displayWheel();

    delete pW;
    delete pE;
    delete pFactory;
}