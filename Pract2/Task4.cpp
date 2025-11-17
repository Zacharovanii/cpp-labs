#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Введите количество товаров (0 для выхода): ";
        cin >> n;

        if (n == 0) break;

        double sum = 0, price;
        for (int i = 1; i <= n; i++) {
            cout << "Цена товара " << i << ": ";
            cin >> price;
            sum += price;
        }

        double finalSum = sum;
        if (sum > 5000) finalSum *= 0.9;

        char card;
        cout << "Есть карта лояльности? (y/n): ";
        cin >> card;
        if (card == 'y' || card == 'Y') finalSum *= 0.95;

        double cash;
        cout << "Введите сумму, которую дал клиент: ";
        cin >> cash;

        cout << "\nОбщая стоимость без скидок: " << sum
             << "\nИтоговая сумма: " << finalSum
             << "\nСдача: " << cash - finalSum << "\n\n";

    } while (n != 0);

    cout << "Программа завершена." << endl;
}
