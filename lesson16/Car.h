#pragma once
#include <string>
#include <iostream>

namespace Vehicles {

    class Car {
    protected:
        std::string brand;
        std::string color;
        std::string bodyType;
        double engineVolume;
        double mileage;

    public:
        // Конструкторы через список инициализации
        Car();
        Car(const std::string& b, const std::string& c,
            const std::string& bt, double ev, double m);

        // Геттеры
        std::string getBrand() const;
        std::string getColor() const;
        std::string getBodyType() const;
        double getEngineVolume() const;
        double getMileage() const;

        // Сеттеры
        void setBrand(const std::string& b);
        void setColor(const std::string& c);
        void setBodyType(const std::string& bt);
        void setEngineVolume(double ev);
        void setMileage(double m);

        // Методы
        virtual void print() const;
    };

} // namespace Vehicles
