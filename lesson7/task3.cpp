#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int arr[n];
    int result[n];
    int index = 0;

    cout << "Введите коды товаров: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            result[index++] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            result[index++] = arr[i];
    }

    cout << "Товары после перестановки: ";
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
