#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    char exitChar;

    int plan[5];
    do {
        int actualSize;
        cout << "Введите калорийность плана (5 блюд): ";
        for(int i = 0; i < 5; i++) cin >> plan[i];

        cout << "Введите количество фактических блюд: ";
        cin >> actualSize;
        int* actual = new int[actualSize];

        cout << "Введите калорийность фактических блюд: ";
        for(int i = 0; i < actualSize; i++) cin >> actual[i];

        checkCalories(plan, actual, 5, actualSize);

        cout << "Для выхода нажмите 0, для продолжения любой символ: ";
        cin >> exitChar;

        delete[] actual;
    } while(exitChar != '0');

    return 0;
}
