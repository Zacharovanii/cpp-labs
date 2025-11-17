#include <iostream>
using namespace std;

struct Car {
    const char* brand;
    const char* color;
    const char* bodyType;
    double engineVolume;
    double mileage;

    double averageFuelConsumption() {
        return (engineVolume / mileage) * 100;
    }

    void reduceMileage(double km) {
        if (km > 0 && km <= mileage)
            mileage -= km;
    }

    void print() {
        cout << "Марка: " << brand << endl;
        cout << "Цвет: " << color << endl;
        cout << "Тип кузова: " << bodyType << endl;
        cout << "Объем двигателя: " << engineVolume << " л" << endl;
        cout << "Пробег: " << mileage << " км" << endl;
    }
};

int main() {
    Car car1 = {"Toyota", "Серебристый", "Седан", 2.0, 50000};
    car1.print();
    cout << "Средний расход топлива: " << car1.averageFuelConsumption() << " л/100 км\n\n";

    Car* car2 = new Car{"BMW", "Черный", "Купе", 3.0, 30000};
    car2->print();
    cout << "Средний расход топлива: " << car2->averageFuelConsumption() << " л/100 км\n";

    car2->reduceMileage(500);
    cout << "\nПосле уменьшения пробега:\n";
    car2->print();

    delete car2;
    return 0;
}
