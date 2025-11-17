#include <iostream>
using namespace std;

int main() {
    char again;
    do {
        double speed[24];
        double limit;

        cout << "Введите порог скорости: ";
        cin >> limit;

        for (int i = 0; i < 24; i++) {
            cout << "Скорость за " << i + 1 << "-й час: ";
            cin >> speed[i];
        }

        double sum = 0;
        for (int i = 0; i < 24; i++) sum += speed[i];
        cout << "\nСредняя скорость: " << sum / 24 << endl;

        int below = 0, above = 0, maxBelow = 0, maxAbove = 0, moving = 0;
        for (int i = 0; i < 24; i++) {
            if (speed[i] > 0) moving++;
            if (speed[i] <= limit) {
                below++;
                if (above > maxAbove) maxAbove = above;
                above = 0;
            } else {
                above++;
                if (below > maxBelow) maxBelow = below;
                below = 0;
            }
        }

        if (below > maxBelow) maxBelow = below;
        if (above > maxAbove) maxAbove = above;

        cout << "Макс. интервал без превышений: " << maxBelow << " ч\n";
        cout << "Макс. интервал превышений: " << maxAbove << " ч\n";
        cout << "Часов движения: " << moving << endl;

        cout << "\nПовторить? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}
