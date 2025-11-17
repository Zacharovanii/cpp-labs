#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace Zoo {
    class Animal {
    private:
        string name;
        string species;
        string color;
        int age;
        double weight;

    public:
        Animal();
        Animal(const string& n, const string& sp, const string& clr, int a, double w);

        string getName() const;
        string getSpecies() const;
        string getColor() const;
        int getAge() const;
        double getWeight() const;

        void setName(const string& n);
        void setSpecies(const string& s);
        void setColor(const string& c);
        void setAge(int a);
        void setWeight(double w);

        void feed(int days);
        void print() const;

        Animal& operator++();
        Animal operator++(int);
        Animal& operator--();
        Animal operator--(int);

        bool operator<(const Animal& other) const;
        bool operator>(const Animal& other) const;
        bool operator==(const Animal& other) const;
    };

}
