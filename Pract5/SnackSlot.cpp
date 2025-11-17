#include "SnackSlot.h"
#include <iostream>

SnackSlot::SnackSlot(int capacity) {
    this->capacity = capacity;
    this->snackCount = 0;
    this->snacks = new Snack*[capacity];
}

SnackSlot::~SnackSlot() {
    delete[] snacks;
}

bool SnackSlot::addSnack(Snack* snack) {
    if (snackCount < capacity) {
        snacks[snackCount++] = snack;
        return true;
    } else {
        std::cout << "Слот заполнен!" << std::endl;
        return false;
    }
}

int SnackSlot::getFreeSpace() const {
    return capacity - snackCount;
}

int SnackSlot::getSnackCount() const {
    return snackCount;
}

Snack* SnackSlot::getSnack(int index) const {
    if (index >= 0 && index < snackCount)
        return snacks[index];
    else
        return nullptr;
}
