#include <iostream>
using namespace std;

int main() {

        int x;
        cout << "Введите число: ";
        cin >> x;

        int &ref = x;

        if (ref == 0) {
            cout << "Число равно нулю" << endl;
        } else if (ref < 0) {
            cout << "Число отрицательное" << endl;
        } else {
            if ((ref & 1) == 0)
                cout << "Число положительное и четное" << endl;
            else
                cout << "Число положительное и нечетное" << endl;
        }



    return 0;
}