#include "Animal.h"
#include "Car.h"
#include <iostream>
using namespace std;

int main() {
    Animal a1("Бобик", "Собака", "Белый", 5, 12.3);

    Car c1("Toyota", "Черный", "Седан", 2.0, 45000);

    Animal* a2 = new Animal("Мурка", "Кошка", "Серая", 3, 4.2);
    Car* c2 = new Car("BMW", "Синий", "Купе", 3.0, 30000);

    cout << "\nИнформация об объектах\n";
    a1.print();
    c1.print();

    cout << "\nРабота сеттеров с проверкой \n";
    a1.setAge(-3);      // Ошибка
    c1.setEngineVolume(-1.6); // Ошибка

    cout << "\nДинамические объекты\n";
    a2->print();
    c2->print();

    delete a2;
    delete c2;

    return 0;
}
