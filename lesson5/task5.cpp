#include <iostream>
using namespace std;

int main() {
    int volume;
    cout << "Введите уровень громкости (0-10): ";
    cin >> volume;

    if (volume > 6) {
        cout << "Громко" << endl;
    } else if (volume >= 3) {
        cout << "Средне" << endl;
    } else {
        cout << "Тихо" << endl;
    }
    return 0;
}
