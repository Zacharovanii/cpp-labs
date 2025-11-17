#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    char exitChar;
    const int fixedSize = 15;
    double fixed[fixedSize];

    cout << "Введите зарплаты фиксированной ставки для 15 сотрудников: \n";
    for(int i = 0; i < fixedSize; i++) cin >> fixed[i];

    do {
        int hourlySize;
        cout << "Введите количество почасовых сотрудников в этом месяце: ";
        cin >> hourlySize;
        double* hourly = new double[hourlySize];

        cout << "Введите зарплаты почасовых сотрудников:\n";
        for(int i = 0; i < hourlySize; i++) cin >> hourly[i];

        payrollAnalysis(fixed, fixedSize, hourly, hourlySize);

        cout << "Для выхода нажмите 0, для продолжения любой символ: ";
        cin >> exitChar;

        delete[] hourly;
    } while(exitChar != '0');

    return 0;
}
