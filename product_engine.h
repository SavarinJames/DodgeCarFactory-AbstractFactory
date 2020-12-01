// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#ifndef PRODUCT_ENGINE_H
#define PRODUCT_ENGINE_H

#include "header.h"

class Engine
{
protected:
    const string types[5] = {"", "Petrol", "Diesel", "Electric", "Hybrid"};
    string eName;
    int maxHorsePower;
    double engineLiter;
    int type;

public:
    Engine();
    Engine(int ty, const string &name, int hp, double lit);
    virtual void displayEngine();
};

class ChallengerEngine : public Engine
{
private:
public:
    ChallengerEngine();
    ChallengerEngine(int ty, const string &name, int hp, double lit);
    void displayEngine();
};

class DurangoEngine : public Engine
{
private:
public:
    DurangoEngine();
    DurangoEngine(int ty, const string &name, int hp, double lit);
    void displayEngine();
};

#endif