#include "Snack.h"

Snack::Snack() : name(""), price(0.0), calories(0) {}
Snack::Snack(std::string name, double price, int calories) : name(name), price(price), calories(calories) {}
Snack::~Snack() {}

std::string Snack::getName() const { return name; }
double Snack::getPrice() const { return price; }
int Snack::getCalories() const { return calories; }

void Snack::setName(std::string name) { this->name = name; }
void Snack::setPrice(double price) { this->price = price; }
void Snack::setCalories(int calories) { this->calories = calories; }
