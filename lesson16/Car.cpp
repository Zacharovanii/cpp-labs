#include "Car.h"
#include <iostream>
using namespace std;
using namespace Vehicles;

Car::Car()
    : brand("Undefined"), color("White"),
      bodyType("Sedan"), engineVolume(1.6), mileage(0.0) {}

Car::Car(const string& b, const string& c,
         const string& bt, double ev, double m)
    : brand(b), color(c), bodyType(bt),
      engineVolume(ev), mileage(m) {}

string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
string Car::getBodyType() const { return bodyType; }
double Car::getEngineVolume() const { return engineVolume; }
double Car::getMileage() const { return mileage; }

void Car::setBrand(const string& b) { brand = b; }
void Car::setColor(const string& c) { color = c; }
void Car::setBodyType(const string& bt) { bodyType = bt; }
void Car::setEngineVolume(double ev) { engineVolume = ev; }
void Car::setMileage(double m) { mileage = m; }

void Car::print() const {
    cout << "Марка: " << brand
         << "\nЦвет: " << color
         << "\nТип кузова: " << bodyType
         << "\nОбъем двигателя: " << engineVolume << " л"
         << "\nПробег: " << mileage << " км" << endl;
}
