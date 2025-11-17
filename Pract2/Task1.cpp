#include <iostream>
using namespace std;

int main() {
    int age, ticket;

    do {
        cout << "Введите возраст (0 для выхода): ";
        cin >> age;

        if (age == 0) break;
        if (age < 5) {
            cout << "Вход запрещён: слишком маленький возраст\n" << endl;
            continue;
        }

        cout << "Введите тип билета (1-обычный, 2-детский, 3-пенсионер, 4-VIP): ";
        cin >> ticket;

        bool allowed = false;

        if (age <= 12 && ticket == 2) allowed = true;
        else if (age >= 13 && age <= 49 && (ticket == 1 || ticket == 4)) allowed = true;
        else if (age >= 50 && age <= 64 && ticket != 2) allowed = true;
        else if (age >= 65 && (ticket == 3 || ticket == 4)) allowed = true;

        if (allowed) cout << "Вход разрешён. Тип билета: " << ticket << endl;
        else cout << "Вход запрещён: некорректный билет" << endl;

        cout << endl;
    } while (age != 0);
}
