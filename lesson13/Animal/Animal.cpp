#include "Animal.h"
#include <iostream>
using namespace std;

void Animal::initAnimal(const char* n, const char* sp, const char* clr, int a, double w)
{
    name = n;
    species = sp;
    color = clr;
    age = a;
    weight = w;
}

const char* Animal::getName() const { return name; }
const char* Animal::getSpecies() const { return species; }
const char* Animal::getColor() const { return color; }
int Animal::getAge() const { return age; }
double Animal::getWeight() const { return weight; }

void Animal::setName(const char* n) { name = n; }
void Animal::setSpecies(const char* s) { species = s; }
void Animal::setColor(const char* c) { color = c; }

void Animal::setAge(int a) {
    if (a >= 0) age = a;
    else cout << "Ошибка: возраст не может быть отрицательным.\n";
}

void Animal::setWeight(double w) {
    if (w > 0) weight = w;
    else cout << "Ошибка: вес должен быть положительным.\n";
}

void Animal::feed(int days) {
    if (days > 0) weight += (weight * 0.01 * days);
    else cout << "Ошибка: количество дней должно быть положительным.\n";
}

void Animal::print() const {
    cout << "Имя: " << name << endl;
    cout << "Вид: " << species << endl;
    cout << "Окрас: " << color << endl;
    cout << "Возраст: " << age << " лет" << endl;
    cout << "Вес: " << weight << " кг" << endl;
}