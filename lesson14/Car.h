#pragma once

class Car {
private:
    const char* brand;
    const char* color;
    const char* bodyType;
    double engineVolume;
    double mileage;

public:
    Car() = default;
    Car(const char* b, const char* c, const char* bt, double ev, double m);
    ~Car();

    const char* getBrand() const;
    const char* getColor() const;
    const char* getBodyType() const;
    double getEngineVolume() const;
    double getMileage() const;

    void setBrand(const char* b);
    void setColor(const char* c);
    void setBodyType(const char* bt);
    void setEngineVolume(double ev);
    void setMileage(double m);

    double averageFuelConsumption() const;
    void reduceMileage(double km);
    void print() const;
};
