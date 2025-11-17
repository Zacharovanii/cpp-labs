#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    char exitChar;
    const int octSize = 31;
    double lastYear[octSize];

    cout << "Введите температуру за октябрь прошлого года:\n";
    for(int i = 0; i < octSize; i++) cin >> lastYear[i];

    do {
        double* thisYear = new double[octSize];
        cout << "Введите температуры за текущий октябрь:\n";
        for(int i = 0; i < octSize; i++) cin >> thisYear[i];

        temperatureAnalysis(lastYear, octSize, thisYear, octSize);

        cout << "Для выхода нажмите 0, для продолжения любой символ: ";
        cin >> exitChar;

        delete[] thisYear;
    } while(exitChar != '0');

    return 0;
}
