#pragma once
#include <string>

class Snack {
private:
    std::string name;
    double price;
    int calories;

public:
    Snack();
    Snack(std::string name, double price, int calories);
    ~Snack();

    std::string getName() const;
    double getPrice() const;
    int getCalories() const;

    void setName(std::string name);
    void setPrice(double price);
    void setCalories(int calories);
};