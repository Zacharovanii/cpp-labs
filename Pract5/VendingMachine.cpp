#include "VendingMachine.h"
#include <iostream>

VendingMachine::VendingMachine(int slotCount) {
    this->slotCount = slotCount;
    this->addedSlots = 0;
    this->slots = new SnackSlot*[slotCount];
}

VendingMachine::~VendingMachine() {
    delete[] slots;
}

bool VendingMachine::addSlot(SnackSlot* slot) {
    if (addedSlots < slotCount) {
        slots[addedSlots++] = slot;
        return true;
    } else {
        std::cout << "Нет свободных мест для новых слотов!" << std::endl;
        return false;
    }
}

int VendingMachine::getEmptySlotsCount() const {
    return slotCount - addedSlots;
}

void VendingMachine::showSnacks() const {
    std::cout << "\n=== Содержимое автомата ===\n";
    for (int i = 0; i < addedSlots; i++) {
        std::cout << "Слот " << i + 1 << ":\n";
        for (int j = 0; j < slots[i]->getSnackCount(); j++) {
            Snack* s = slots[i]->getSnack(j);
            std::cout << "  [" << j + 1 << "] " << s->getName()
                      << " - " << s->getPrice() << " руб, "
                      << s->getCalories() << " ккал\n";
        }
    }
}

void VendingMachine::buySnack(int slotIndex, int snackIndex, double& money) {
    if (slotIndex < 0 || slotIndex >= addedSlots) {
        std::cout << "Неверный номер слота!\n";
        return;
    }

    Snack* snack = slots[slotIndex]->getSnack(snackIndex);
    if (!snack) {
        std::cout << "Такого снека нет!\n";
        return;
    }

    if (money >= snack->getPrice()) {
        money -= snack->getPrice();
        std::cout << "Вы купили: " << snack->getName() << "\n";
        std::cout << "Остаток средств: " << money << " руб.\n";
    } else {
        std::cout << "Недостаточно средств!\n";
    }
}
