// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#include "product_engine.h"

using namespace std;

Engine::Engine()
{
    type = 0;
    eName = "";
    maxHorsePower = 0;
    engineLiter = 0;
}

Engine::Engine(int ty, const string &name, int hp, double lit) : type(ty), eName(name), maxHorsePower(hp), engineLiter(lit)
{
}

void Engine::displayEngine()
{
    cout << "Type: " << types[type] << endl;
    cout << "Name: " << eName << endl;
    cout << "Maximum Horse Power: " << maxHorsePower << endl;
    cout << "Volume(liters): " << engineLiter << endl;
}

ChallengerEngine::ChallengerEngine()
{
    type = 1;
    eName = "6.2-liter Supercharged V8 Gas";
    maxHorsePower = 807;
    engineLiter = 6.2;
}

ChallengerEngine::ChallengerEngine(int ty, const string &name, int hp, double lit) : Engine(ty, name, hp, lit) {}

void ChallengerEngine::displayEngine()
{
    cout << "Dodge Challenger Engine specs:\n";
    cout << "Type: " << types[type] << endl;
    cout << "Name: " << eName << endl;
    cout << "Maximum Horse Power: " << maxHorsePower << endl;
    cout << "Volume(liters): " << engineLiter << endl;
}

DurangoEngine::DurangoEngine()
{
    type = 1;
    eName = "293-hp, 3.6-liter V-6 (regular gas)";
    maxHorsePower = 293;
    engineLiter = 3.6;
}

DurangoEngine::DurangoEngine(int ty, const string &name, int hp, double lit) : Engine(ty, name, hp, lit) {}

void DurangoEngine::displayEngine()
{
    cout << "Dodge Durango Engine specs:\n";
    cout << "Type: " << types[type] << endl;
    cout << "Name: " << eName << endl;
    cout << "Maximum Horse Power: " << maxHorsePower << endl;
    cout << "Volume(liters): " << engineLiter << endl;
}