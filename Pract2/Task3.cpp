#include <iostream>
using namespace std;

int main() {
    int drink = -1, size, addon;
    double price;

    do {
        cout << "Меню:\n1.Эспрессо(100)\n2.Капучино(120)\n3.Латте(130)\n4.Чай(70)\n5.Горячий шоколад(150)\n0 - выход\nВыберите напиток: ";
        cin >> drink;
        if (drink == 0) break;

        string drinkName;
        switch (drink) {
        case 1: drinkName="Эспрессо"; price=100; break;
        case 2: drinkName="Капучино"; price=120; break;
        case 3: drinkName="Латте"; price=130; break;
        case 4: drinkName="Чай"; price=70; break;
        case 5: drinkName="Горячий шоколад"; price=150; break;
        default: cout << "Ошибка! Неправильный ввод\n\n"; continue;
        }

        cout << "Размер (1-S, 2-M, 3-L): ";
        cin >> size;
        string sizeName;
        switch (size) {
        case 1: sizeName="S"; break;
        case 2: sizeName="M"; price*=1.3; break;
        case 3: sizeName="L"; price*=1.5; break;
        default: cout << "Ошибка! Неправильный ввод\n\n"; continue;
        }

        cout << "Добавка (0-без,1-молоко,2-сироп,3-сливки): ";
        cin >> addon;
        string addonName="без добавок";
        switch (addon) {
        case 0: break;
        case 1: addonName="молоко"; price+=10; break;
        case 2: addonName="сироп"; price+=15; break;
        case 3: addonName="сливки"; price+=20; break;
        default: cout << "Ошибка! Неправильный ввод\n\n"; continue;
        }

        cout << "\nЧек:\n" << drinkName << " (" << sizeName << ")\nДобавка: "
             << addonName << "\nИтого: " << price << " руб.\n\n";
    } while (drink != 0);
}
