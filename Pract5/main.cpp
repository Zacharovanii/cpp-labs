#include <iostream>
#include "VendingMachine.h"

int main() {
    Snack* bounty = new Snack("Bounty", 50, 250);
    Snack* snickers = new Snack("Snickers", 60, 300);
    Snack* twix = new Snack("Twix", 55, 280);

    SnackSlot* slot1 = new SnackSlot(5);
    slot1->addSnack(bounty);
    slot1->addSnack(snickers);
    slot1->addSnack(twix);

    VendingMachine* machine = new VendingMachine(3);
    machine->addSlot(slot1);

    double money = 0.0;
    int choice;

    do {
        std::cout << "\n=== ВЕНДИНГОВЫЙ АВТОМАТ ===\n";
        std::cout << "1. Показать снеки\n";
        std::cout << "2. Внести деньги\n";
        std::cout << "3. Купить снеки\n";
        std::cout << "4. Проверить баланс\n";
        std::cout << "0. Выход (вернуть сдачу)\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            machine->showSnacks();
            break;

        case 2: {
            double sum;
            std::cout << "Введите сумму пополнения: ";
            std::cin >> sum;

            if (sum <= 0) {
                std::cout << "Сумма должна быть положительной!\n";
                break;
            }

            money += sum;
            std::cout << "Текущий баланс: " << money << " руб.\n";
            break;
        }

        case 3: {
            if (money <= 0) {
                std::cout << "Баланс нулевой — внесите деньги!\n";
                break;
            }

            machine->showSnacks();

            int slotNum, snackNum;
            std::cout << "Введите номер слота: ";
            std::cin >> slotNum;
            std::cout << "Введите номер снека: ";
            std::cin >> snackNum;

            machine->buySnack(slotNum - 1, snackNum - 1, money);
            break;
        }

        case 4:
            std::cout << "Ваш баланс: " << money << " руб.\n";
            break;

        case 0:
            std::cout << "\nВыход из автомата...\n";
            std::cout << "Ваша сдача: " << money << " руб.\n";
            money = 0;
            break;

        default:
            std::cout << "Ошибка: нет такого пункта меню.\n";
        }

    } while (choice != 0);

    delete machine;
    delete slot1;
    delete bounty;
    delete snickers;
    delete twix;

    return 0;
}
