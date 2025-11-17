#pragma once

class Animal {
private:
    const char* name;
    const char* species;
    const char* color;
    int age;
    double weight;

public:
    Animal() = default;
    Animal(const char* n, const char* sp, const char* clr, int a, double w);
    ~Animal();

    const char* getName() const;
    const char* getSpecies() const;
    const char* getColor() const;
    int getAge() const;
    double getWeight() const;

    void setName(const char* n);
    void setSpecies(const char* s);
    void setColor(const char* c);
    void setAge(int a);
    void setWeight(double w);

    void feed(int days);
    void print() const;
};
