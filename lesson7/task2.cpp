#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Разница между максимальным и минимальным: " << maxVal - minVal << endl;
    return 0;
}
