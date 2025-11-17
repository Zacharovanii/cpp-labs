#include "Animal.h"
using namespace std;
using namespace Zoo;

Animal::Animal()
{
    this->name = "Boba";
    this->species = "Cat";
    this->color = "White";
    this->age = 1;
    this->weight = 1;
}

Animal::Animal(const string& n, const string& sp, const string& clr, int a, double w) {
    this->name = n;
    this->species = sp;
    this->color = clr;
    this->age = a;
    this->weight = w;
}

string Animal::getName() const { return name; }
string Animal::getSpecies() const { return species; }
string Animal::getColor() const { return color; }
int Animal::getAge() const { return age; }
double Animal::getWeight() const { return weight; }

void Animal::setName(const string& n) {
    if (!n.empty()) name = n;
    else cout << "Ошибка: имя не может быть пустым.\n";
}

void Animal::setSpecies(const string& s) {
    if (!s.empty()) species = s;
    else cout << "Ошибка: вид не может быть пустым.\n";
}

void Animal::setColor(const string& c) {
    if (!c.empty()) color = c;
    else cout << "Ошибка: цвет не может быть пустым.\n";
}

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

Animal& Animal::operator++() {
    weight += 5;
    return *this;
}

Animal Animal::operator++(int) {
    Animal temp = *this;
    weight += 5;
    return temp;
}

Animal& Animal::operator--() {
    if (weight > 5) weight -= 5;
    else cout << "Ошибка: вес не может быть меньше 0.\n";
    return *this;
}

Animal Animal::operator--(int) {
    Animal temp = *this;
    if (weight > 5) weight -= 5;
    else cout << "Ошибка: вес не может быть меньше 0.\n";
    return temp;
}

bool Animal::operator<(const Animal& other) const {
    return weight < other.weight;
}

bool Animal::operator>(const Animal& other) const {
    return weight > other.weight;
}

bool Animal::operator==(const Animal& other) const {
    return weight == other.weight;
}
