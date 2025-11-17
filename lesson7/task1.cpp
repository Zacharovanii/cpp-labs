#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) count++;
    }

    cout << "Количество четных элементов: " << count << endl;
    return 0;
}
