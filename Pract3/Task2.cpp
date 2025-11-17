#include <iostream>
using namespace std;

int main() {
    char again;
    do {
        int days;
        cout << "Введите количество дней: ";
        cin >> days;

        if (days <= 0) {
            cout << "Некорректное количество!\n";
            continue;
        }

        int* visits = new int[days];

        for (int i = 0; i < days; i++) {
            cout << "Посещений в день " << i + 1 << ": ";
            cin >> visits[i];
        }

        int sum = 0;
        for (int i = 0; i < days; i++)
            sum += visits[i];

        double avg = sum / days;

        int maxV = visits[0], minV = visits[0];
        int maxD = 1, minD = 1;

        for (int i = 1; i < days; i++) {
            if (visits[i] > maxV) { maxV = visits[i]; maxD = i + 1; }
            if (visits[i] < minV) { minV = visits[i]; minD = i + 1; }
        }

        int low = 0;
        for (int i = 0; i < days; i++)
            if (visits[i] < avg) low++;

        cout << "\nВсего посещений: " << sum;
        cout << "\nСреднее в день: " << avg;
        cout << "\nМаксимум: " << maxV << " (день " << maxD << ")";
        cout << "\nМинимум: " << minV << " (день " << minD << ")";
        cout << "\nНизкая посещаемость (< среднего): " << (100.0 * low / days) << "%\n";

        cout << "\nПовторить анализ? (y/n): ";
        cin >> again;

        delete[] visits;
    } while (again == 'y' || again == 'Y');

    return 0;
}
