#pragma once
#include "Car.h"

namespace Vehicles {

    class Truck : public Car {
    private:
        double loadCapacity;  // грузоподъёмность, т

    public:
        Truck();
        Truck(const std::string& b, const std::string& c,
              const std::string& bt, double ev, double m,
              double capacity);

        double getLoadCapacity() const;
        void setLoadCapacity(double c);

        void print() const override;
    };

} // namespace Vehicles
