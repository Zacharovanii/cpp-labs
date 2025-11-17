#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char again;
    do {
        double cur[22], last[22];

        cout << "Введите продажи текущего месяца:\n";
        for (int i = 0; i < 22; i++) {
            cout << "Текущий месяц " << i + 1 << "-й день: ";
            cin >> cur[i];
        }

        cout << "Введите продажи прошлого года:\n";
        for (int i = 0; i < 22; i++) {
            cout << "Месяц прошлого года " << i + 1 << "-й день: ";
            cin >> last[i];
        }

        double sumC = 0, sumL = 0;
        for (int i = 0; i < 22; i++) {
            sumC += cur[i];
            sumL += last[i];
        }

        cout << "\nСредняя сумма продаж: " << sumC / 22 << endl;

        cout << "Дни с продажами > 100000: ";
        for (int i = 0; i < 22; i++)
            if (cur[i] > 100000) cout << i + 1 << " ";

        cout << "\nДни с продажами < 10000: ";
        for (int i = 0; i < 22; i++)
            if (cur[i] < 10000) cout << i + 1 << " ";
        cout << endl;

        int periods = 0, len = 1;
        for (int i = 1; i < 22; i++) {
            if (cur[i] < cur[i - 1]) len++;
            else {
                if (len > 3) periods++;
                len = 1;
            }
        }
        if (len > 3) periods++;
        cout << "Периодов снижения (>3 дней): " << periods << endl;

        int plan;
        if (sumC >= sumL)
            plan = round(sumC * 1.1);
        else
            plan = round((sumC + sumL) / 2);

        cout << "План продаж на след. месяц: " << plan << endl;

        cout << "\nПовторить анализ? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}
