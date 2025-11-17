#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace Vehicles {

    class Car {
    private:
        string brand;
        string color;
        string bodyType;
        double engineVolume;
        double mileage;

    public:
        Car();
        Car(const string& b, const string& c, const string& bt, double ev, double m);

        string getBrand() const;
        string getColor() const;
        string getBodyType() const;
        double getEngineVolume() const;
        double getMileage() const;

        void setBrand(const string& b);
        void setColor(const string& c);
        void setBodyType(const string& bt);
        void setEngineVolume(double ev);
        void setMileage(double m);

        double averageFuelConsumption() const;
        void print() const;

        Car& operator++();
        Car operator++(int);
        Car& operator--();
        Car operator--(int);

        bool operator<(const Car& other) const;
        bool operator>(const Car& other) const;
        bool operator==(const Car& other) const;
    };

}
