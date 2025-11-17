#include "Truck.h"
#include <iostream>
using namespace std;
using namespace Vehicles;

Truck::Truck()
    : Car(), loadCapacity(5.0) {}  // делегирование конструктора Car()

Truck::Truck(const string& b, const string& c,
             const string& bt, double ev, double m,
             double capacity)
    : Car(b, c, bt, ev, m), loadCapacity(capacity) {}

double Truck::getLoadCapacity() const { return loadCapacity; }
void Truck::setLoadCapacity(double c) { loadCapacity = c; }

void Truck::print() const {
    Car::print();
    cout << "Грузоподъемность: " << loadCapacity << " т" << endl;
}
