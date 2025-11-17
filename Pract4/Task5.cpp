#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    char exitChar;
    double fixed[7] = {5800, 6200, 4700, 10500, 5000, 3600, 23700};

    do {
        double income;
        cout << "Введите ежемесячный доход семьи: ";
        cin >> income;

        int unplannedSize;
        cout << "Введите количество незапланированных расходов: ";
        cin >> unplannedSize;

        double* unplanned = new double[unplannedSize];

        if(unplannedSize > 0) {
            cout << "Введите суммы незапланированных расходов:\n";
            for(int i = 0; i < unplannedSize; i++) cin >> unplanned[i];
        }

        financeAnalysis(income, fixed, 7, unplanned, unplannedSize);

        cout << "Для выхода нажмите 0, для продолжения любой символ: ";
        cin >> exitChar;

        delete[] unplanned;
    } while(exitChar != '0');

    return 0;
}
