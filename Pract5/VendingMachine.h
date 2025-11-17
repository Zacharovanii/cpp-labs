#pragma once
#include "SnackSlot.h"

class VendingMachine {
private:
    int slotCount;
    int addedSlots;
    SnackSlot** slots;

public:
    VendingMachine(int slotCount);
    ~VendingMachine();

    bool addSlot(SnackSlot* slot);
    int getEmptySlotsCount() const;
    void showSnacks() const;
    void buySnack(int slotIndex, int snackIndex, double& money);
};