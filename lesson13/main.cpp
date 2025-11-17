#include <iostream>
#include "Car/Car.h"
#include "Animal/Animal.h"
using namespace std;

int main() {
    Animal dog;
    dog.initAnimal("Бобик", "Собака", "Коричневый", 5, 20.5);
    cout << "=== Информация о животном dog ===\n";
    dog.print();
    cout << endl;

    dog.setAge(6);
    dog.setWeight(21.0);
    dog.feed(5);
    cout << "После кормления:\n";
    dog.print();
    cout << endl;

    Animal* cat = new Animal;
    cat->initAnimal("Мурзик", "Кошка", "Серый", 3, 5.2);
    cout << "=== Информация о животном cat ===\n";
    cat->print();
    cat->feed(3);
    cout << "После кормления:\n";
    cat->print();
    delete cat;
    cout << endl;

    Animal animals[2];
    animals[0].initAnimal("Тузик", "Собака", "Белый", 4, 18.3);
    animals[1].initAnimal("Рыжик", "Кот", "Рыжий", 2, 4.1);

    cout << "=== Массив животных ===\n";
    for (int i = 0; i < 2; ++i) {
        cout << "Животное " << i + 1 << ":\n";
        animals[i].print();
        cout << endl;
    }

    Car car1;
    car1.initCar("Toyota", "Red", "Sedan", 1.8, 120000);
    cout << "=== Информация об автомобиле car1 ===\n";
    car1.print();
    cout << endl;

    car1.setMileage(110000);
    car1.setEngineVolume(2.0);
    cout << "После изменения характеристик:\n";
    car1.print();
    cout << "Средний расход топлива: " << car1.averageFuelConsumption() << " л/100 км\n";
    car1.reduceMileage(5000);
    cout << "После уменьшения пробега:\n";
    car1.print();
    cout << endl;

    Car* car2 = new Car;
    car2->initCar("BMW", "Black", "Coupe", 3.0, 80000);
    cout << "=== Информация об автомобиле car2 ===\n";
    car2->print();
    delete car2;
    cout << endl;

    Car cars[2];
    cars[0].initCar("Honda", "White", "Hatchback", 1.5, 60000);
    cars[1].initCar("Mazda", "Blue", "SUV", 2.2, 90000);

    cout << "=== Массив автомобилей ===\n";
    for (int i = 0; i < 2; ++i) {
        cout << "Автомобиль " << i + 1 << ":\n";
        cars[i].print();
        cout << endl;
    }



    return 0;
}
