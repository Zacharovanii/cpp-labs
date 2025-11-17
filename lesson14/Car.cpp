#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(const char* b, const char* c, const char* bt, double ev, double m)
{
    this->brand = b;
    this->color = c;
    this->bodyType = bt;
    this->engineVolume = ev;
    this->mileage = m;
    cout << "Вызван параметризованный конструктор Car\n";
}

Car::~Car() {
    cout << "Деструктор Car: " << brand << endl;
}

const char* Car::getBrand() const { return brand; }
const char* Car::getColor() const { return color; }
const char* Car::getBodyType() const { return bodyType; }
double Car::getEngineVolume() const { return engineVolume; }
double Car::getMileage() const { return mileage; }

void Car::setBrand(const char* b) { brand = b; }
void Car::setColor(const char* c) { color = c; }
void Car::setBodyType(const char* bt) { bodyType = bt; }

void Car::setEngineVolume(double ev) {
    if (ev > 0) engineVolume = ev;
    else cout << "Ошибка: объем двигателя должен быть положительным.\n";
}

void Car::setMileage(double m) {
    if (m >= 0) mileage = m;
    else cout << "Ошибка: пробег не может быть отрицательным.\n";
}

double Car::averageFuelConsumption() const {
    if (mileage > 0) return (engineVolume / mileage) * 100;
    return 0;
}

void Car::reduceMileage(double km) {
    if (km > 0 && km <= mileage) mileage -= km;
    else cout << "Ошибка: некорректное значение для уменьшения пробега.\n";
}

void Car::print() const {
    cout << "Марка: " << brand << endl;
    cout << "Цвет: " << color << endl;
    cout << "Тип кузова: " << bodyType << endl;
    cout << "Объем двигателя: " << engineVolume << " л" << endl;
    cout << "Пробег: " << mileage << " км" << endl;
    cout << endl;
}
