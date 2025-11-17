#include <iostream>
#include "functions.h"
using namespace std;

// 1
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : 0; }

double power(double base, int exp) {
    if(exp == 0) return 1.0;
    if(exp > 0) return base * power(base, exp - 1);
    return 1.0 / power(base, -exp);
}


long long factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int my_bit_and(int a, int b) { return a & b; }
int my_bit_or(int a, int b) { return a | b; }
int my_bit_xor(int a, int b) { return a ^ b; }
int my_bit_not(int a) { return ~a; }

// 2
double sumArray(int arr[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

void checkCalories(int plan[], int actual[], int planSize, int actualSize) {
    double planSum = sumArray(plan, planSize);
    double actualSum = sumArray(actual, actualSize);

    cout << "План: " << planSum << " калорий, Факт: " << actualSum << " калорий\n";

    if(actualSum == planSum)
        cout << "Вы попали в план потребления калорий.\n";
    else {
        cout << "Разница калорий: " << (actualSum - planSum) << endl;
        if(actualSum >= 2 * planSum)
            cout << "Предупреждение: потребление больше чем в 2 раза!\n";
        else if(actualSum <= planSum / 2)
            cout << "Предупреждение: потребление меньше чем в 2 раза!\n";
    }

    if(actualSize <= 2)
        cout << "Предупреждение: слишком мало приемов пищи!\n";
}

// 3

double sumArray(double arr[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

double averageArray(double arr[], int size) {
    if(size == 0) return 0;
    return sumArray(arr, size) / size;
}

void payrollAnalysis(double fixed[], int fixedSize, double hourly[], int hourlySize) {
    double fixedSum = sumArray(fixed, fixedSize);
    double hourlySum = sumArray(hourly, hourlySize);
    double totalSum = fixedSum + hourlySum;

    cout << "Общий фонд оплаты: " << totalSum << endl;

    if(fixedSum > hourlySum)
        cout << "Больший бюджет у фиксированной ставки: " << fixedSum << endl;
    else
        cout << "Больший бюджет у почасовой оплаты: " << hourlySum << endl;

    double totalAvg = totalSum / (fixedSize + hourlySize);
    int aboveAvgCount = 0;
    for(int i = 0; i < fixedSize; i++) if(fixed[i] > totalAvg) aboveAvgCount++;
    for(int i = 0; i < hourlySize; i++) if(hourly[i] > totalAvg) aboveAvgCount++;
    cout << "Количество сотрудников с зарплатой выше среднего: " << aboveAvgCount << endl;

    double minFixed = fixed[0];
    for(int i = 1; i < fixedSize; i++) if(fixed[i] < minFixed) minFixed = fixed[i];

    int hourlyBelowMin = 0;
    for(int i = 0; i < hourlySize; i++) if(hourly[i] < minFixed) hourlyBelowMin++;
    cout << "Почасовых сотрудников с зарплатой ниже минимальной фиксированной: " << hourlyBelowMin << endl;
}

// 4
double maxArray(double arr[], int size) {
    double maxVal = arr[0];
    for(int i = 1; i < size; i++) if(arr[i] > maxVal) maxVal = arr[i];
    return maxVal;
}

double minArray(double arr[], int size) {
    double minVal = arr[0];
    for(int i = 1; i < size; i++) if(arr[i] < minVal) minVal = arr[i];
    return minVal;
}

int countBelowZero(double arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) if(arr[i] < 0) count++;
    return count;
}

void temperatureAnalysis(double lastYear[], int lastSize, double thisYear[], int thisSize) {
    double avgLast = averageArray(lastYear, lastSize);
    double avgThis = averageArray(thisYear, thisSize);

    cout << "Средняя температура прошлого года: " << avgLast << "°C\n";
    cout << "Средняя температура этого года: " << avgThis << "°C\n";

    if(avgLast > avgThis)
        cout << "Прошлый октябрь был теплее.\n";
    else
        cout << "Этот октябрь был теплее.\n";

    if(abs(avgLast - avgThis) > 5)
        cout << "Предупреждение: перепад температур более 5°C!\n";

    cout << "Максимальная температура прошлого года: " << maxArray(lastYear, lastSize) << endl;
    cout << "Минимальная температура прошлого года: " << minArray(lastYear, lastSize) << endl;
    cout << "Максимальная температура этого года: " << maxArray(thisYear, thisSize) << endl;
    cout << "Минимальная температура этого года: " << minArray(thisYear, thisSize) << endl;

    cout << "Дней ниже 0°C в прошлом году: " << countBelowZero(lastYear, lastSize) << endl;
    cout << "Дней ниже 0°C в этом году: " << countBelowZero(thisYear, thisSize) << endl;
}

// 5
void financeAnalysis(double income, double fixed[], int fixedSize, double unplanned[], int unplannedSize) {
    double fixedSum = sumArray(fixed, fixedSize);
    double unplannedSum = sumArray(unplanned, unplannedSize);

    cout << "Общие обязательные расходы: " << fixedSum << endl;
    cout << "Общие незапланированные расходы: " << unplannedSum << endl;

    double fixedAvg = averageArray(fixed, fixedSize);
    double unplannedAvg = averageArray(unplanned, unplannedSize);

    cout << "Средние обязательные расходы: " << fixedAvg << endl;
    cout << "Средние незапланированные расходы: " << unplannedAvg << endl;

    if(unplannedSum > fixedSum) {
        double percent = (unplannedAvg / fixedAvg) * 100 - 100;
        cout << "Незапланированные расходы превышают обязательные на " << percent << "%\n";
    }

    double remaining = income - fixedSum - unplannedSum;
    cout << "Остаток на счету семьи: " << remaining << endl;

    double allowedUnplanned = income - fixedSum - income * 0.10;
    cout << "Максимальная сумма незапланированных расходов для остатка >= 10% дохода: " << allowedUnplanned << endl;
}
