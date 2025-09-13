#include <iostream>
using namespace std;

int main() {
    double price;
    int method;
    cout << "Введите стоимость товара: ";
    cin >> price;
    cout << "Выберите способ оплаты (1 - наличные, 2 - карта, 3 - рассрочка): ";
    cin >> method;

    switch (method) {
        case 1:
            break;
        case 2:
            price *= 0.9;
            break;
        case 3:
            price *= 1.2;
            break;
        default:
            cout << "Некорректный способ оплаты!" << endl;
            return 0;
    }

    cout << "Итоговая стоимость: " << price << endl;
    return 0;
}
