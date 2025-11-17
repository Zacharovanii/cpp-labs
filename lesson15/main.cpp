#include <iostream>
#include "Animal.h"
#include "Car.h"
using namespace std;
using namespace Zoo;
using namespace Vehicles;

int main() {
    cout << "=== Проверка класса Animal ===\n";
    Animal dog("Бобик", "Собака", "Коричневый", 5, 20.5);
    Animal cat("Мурзик", "Кот", "Серый", 3, 4.2);

    dog.print();
    cout << "\nПосле ++dog:\n";
    ++dog;
    dog.print();

    cat.print();
    cout << "\nПосле cat++:\n";
    cat++;
    cat.print();

    cout << "\nСравнение по весу:\n";
    cout << "dog > cat ? " << (dog > cat ? "Да" : "Нет") << endl;
    cout << "dog == cat ? " << (dog == cat ? "Да" : "Нет") << endl;

    cout << "\n=== Проверка класса Car ===\n";
    Car* car1 = new Car("Toyota", "Red", "Sedan", 1.8, 120000);
    Car* car2 = new Car("BMW", "Black", "Coupe", 3.0, 80000);

    car1->print();
    cout << "\nПосле ++car1:\n";
    ++car1;
    car1->print();

    car2->print();
    cout << "\nПосле car2--:\n";
    car2--;
    car2->print();

    cout << "\nСравнение по объему двигателя:\n";
    cout << "car1 < car2 ? " << (car1 < car2 ? "Да" : "Нет") << endl;
    cout << "car1 == car2 ? " << (car1 == car2 ? "Да" : "Нет") << endl;

    delete car1;
    delete car2;
    return 0;
}
