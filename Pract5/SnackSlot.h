#pragma once
#include "Snack.h"

class SnackSlot {
private:
    int capacity;
    int snackCount;
    Snack** snacks;

public:
    SnackSlot(int capacity);
    ~SnackSlot();

    bool addSnack(Snack* snack);
    int getFreeSpace() const;
    int getSnackCount() const;

    Snack* getSnack(int index) const;
};