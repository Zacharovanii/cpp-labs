#include <iostream>
using namespace std;

int main() {
    char again;
    do {
        int shift;
        cout << "Введите сдвиг: ";
        cin >> shift;

        int size;
        cout << "Введите длину текста: ";
        cin >> size;

        char* text = new char[size + 1];

        cout << "Введите текст для шифрования (до " << size << " символов): ";
        cin >> text;

        text[size + 1] = '\0';

        for (int i = 0; text[i] != '\0'; i++) {
            char ch = text[i];
            if (ch >= 'a' && ch <= 'z')
                text[i] = 'a' + (ch - 'a' + shift + 26) % 26;
            else if (ch >= 'A' && ch <= 'Z')
                text[i] = 'A' + (ch - 'A' + shift + 26) % 26;
        }

        cout << "Зашифрованный текст: " << text << endl;

        cout << "\nПовторить? (y/n): ";
        cin >> again;

        delete[] text;
    } while (again == 'y' || again == 'Y');

    return 0;
}
