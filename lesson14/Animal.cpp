#include <iostream>
#include "Animal.h"
using namespace std;


Animal::Animal(const char* n, const char* sp, const char* clr, int a, double w)
{
    this->name = n;
    this->species = sp;
    this->color = clr;
    this->age = a;
    this->weight = w;
    cout << "Вызван параметризованный конструктор Animal\n";
}

Animal::~Animal() {
    cout << "Деструктор Animal: " << name << endl;
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
    cout << endl;
}
