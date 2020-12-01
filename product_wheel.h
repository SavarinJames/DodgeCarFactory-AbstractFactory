// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#ifndef PRODUCT_WHEEL_H
#define PRODUCT_WHEEL_H

#include "header.h"

class Wheel
{
protected:
    string appearance;
    string material;
    double diameter;
    double width;

public:
    Wheel();
    Wheel(const string &appe, const string &mat, double dia, double wid);
    virtual void displayWheel();
};

class ChallengerWheel : public Wheel
{
public:
    ChallengerWheel();
    ChallengerWheel(const string &appe, const string &mat, double dia, double wid);
    void displayWheel();
};

class DurangoWheel : public Wheel
{
public:
    DurangoWheel();
    DurangoWheel(const string &appe, const string &mat, double dia, double wid);
    void displayWheel();
};

#endif