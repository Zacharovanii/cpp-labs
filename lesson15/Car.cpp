#include "Car.h"
using namespace std;
using namespace Vehicles;

Car::Car()
{
    this->brand = "BMW";
    this->color = "Black";
    this->bodyType = "Coupe";
    this->engineVolume = 3.0;
    this->mileage = 100000.0;
}

Car::Car(const string& b, const string& c, const string& bt, double ev, double m) {
    this->brand = b;
    this->color = c;
    this->bodyType = bt;
    this->engineVolume = ev;
    this->mileage = m;
}

string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
string Car::getBodyType() const { return bodyType; }
double Car::getEngineVolume() const { return engineVolume; }
double Car::getMileage() const { return mileage; }

void Car::setBrand(const string& b) {
    if (!b.empty()) brand = b;
    else cout << "Ошибка: марка не может быть пустой.\n";
}

void Car::setColor(const string& c) {
    if (!c.empty()) color = c;
    else cout << "Ошибка: цвет не может быть пустым.\n";
}

void Car::setBodyType(const string& bt) {
    if (!bt.empty()) bodyType = bt;
    else cout << "Ошибка: тип кузова не может быть пустым.\n";
}

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

void Car::print() const {
    cout << "Марка: " << brand << endl;
    cout << "Цвет: " << color << endl;
    cout << "Тип кузова: " << bodyType << endl;
    cout << "Объем двигателя: " << engineVolume << " л" << endl;
    cout << "Пробег: " << mileage << " км" << endl;
    cout << endl;

}

Car& Car::operator++() {
    mileage += 10000;
    return *this;
}

Car Car::operator++(int) {
    Car temp = *this;
    mileage += 10000;
    return temp;
}

Car& Car::operator--() {
    if (mileage >= 10000) mileage -= 10000;
    else cout << "Ошибка: пробег не может быть отрицательным.\n";
    return *this;
}

Car Car::operator--(int) {
    Car temp = *this;
    if (mileage >= 10000) mileage -= 10000;
    else cout << "Ошибка: пробег не может быть отрицательным.\n";
    return temp;
}

bool Car::operator<(const Car& other) const { return engineVolume < other.engineVolume; }
bool Car::operator>(const Car& other) const { return engineVolume > other.engineVolume; }
bool Car::operator==(const Car& other) const { return engineVolume == other.engineVolume; }
