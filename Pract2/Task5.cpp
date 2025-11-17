#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = 1 + rand()%20, guess, attempts=0;

    cout << "Угадайте число от 1 до 20!\n\n";
    do {
        cout << "Введите число: ";
        cin >> guess;
        if (guess < 1 || guess > 20) {
            cout << "Ошибка! Введите число от 1 до 20.\n";
            continue;
        }
        attempts++;
        if (guess > secret) cout << "Слишком много!\n\n";
        else if (guess < secret) cout << "Слишком мало!\n\n";
    } while (guess != secret);

    cout << "\nПоздравляем, вы угадали!\nПопыток: " << attempts << "\n";
}
