// 19125076
// Nguyen Phu Van
// 19APCS1
// CS202 Seminar

#include "product_wheel.h"

using namespace std;

Wheel::Wheel() : appearance(""), material(""), diameter(0.0), width(0.0) {}

Wheel::Wheel(const string &appe, const string &mat, double dia, double wid) : appearance(appe), material(mat), diameter(dia), width(wid) {}

void Wheel::displayWheel()
{
    cout << "Appearance: " << appearance << endl;
    cout << "Material: " << material << endl;
    cout << "Diameter: " << diameter << " in." << endl;
    cout << "Width: " << width << " in." << endl;
}

ChallengerWheel::ChallengerWheel()
{
    appearance = "Black";
    material = "Forged Aluminium";
    diameter = 20;
    width = 9.5;
}

ChallengerWheel::ChallengerWheel(const string &appe, const string &mat, double dia, double wid) : Wheel(appe, mat, dia, wid) {}

void ChallengerWheel::displayWheel()
{
    cout << "Dodger Challenger Wheel specs:\n";
    cout << "Appearance: " << appearance << endl;
    cout << "Material: " << material << endl;
    cout << "Diameter: " << diameter << " in." << endl;
    cout << "Width: " << width << " in." << endl;
}

DurangoWheel::DurangoWheel()
{
    appearance = "Black";
    material = "Aluminium";
    diameter = 20.0;
    width = 10.0;
}

DurangoWheel::DurangoWheel(const string &appe, const string &mat, double dia, double wid) : Wheel(appe, mat, dia, wid) {}

void DurangoWheel::displayWheel()
{
    cout << "Dodge Durango Wheel specs:\n";
    cout << "Appearance: " << appearance << endl;
    cout << "Material: " << material << endl;
    cout << "Diameter: " << diameter << " in." << endl;
    cout << "Width: " << width << " in." << endl;
}