#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Введите строку (только строчные английские буквы): ";
    cin >> str;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'z') str[i] = 'a';
        else if (str[i] >= 'a' && str[i] <= 'y')
            str[i]++;
    }

    cout << "Результат: " << str << endl;
    return 0;
}
