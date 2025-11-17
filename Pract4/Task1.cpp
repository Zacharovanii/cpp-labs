#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n================= Калькулятор =================\n";
        cout << "Выберите операцию:\n";
        cout << "1: + (сложение)\n";
        cout << "2: - (вычитание)\n";
        cout << "3: * (умножение)\n";
        cout << "4: / (деление)\n";
        cout << "5: ^ (возведение в степень)\n";
        cout << "6: ! (факториал)\n";
        cout << "7: & (битовое AND)\n";
        cout << "8: | (битовое OR)\n";
        cout << "9: ^ (битовое XOR)\n";
        cout << "10: ~ (битовое NOT)\n";
        cout << "0: Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if(choice == 0) break;

        double x, y;
        int a, b;
        switch(choice) {
            case 1:
                cout << "Введите два числа для сложения: ";
                cin >> x >> y;
                cout << "Результат: " << add(x, y) << endl;
                break;
            case 2:
                cout << "Введите два числа для вычитания: ";
                cin >> x >> y;
                cout << "Результат: " << subtract(x, y) << endl;
                break;
            case 3:
                cout << "Введите два числа для умножения: ";
                cin >> x >> y;
                cout << "Результат: " << multiply(x, y) << endl;
                break;
            case 4:
                cout << "Введите два числа для деления: ";
                cin >> x >> y;
                if(y == 0) cout << "Ошибка: деление на ноль!\n";
                else cout << "Результат: " << divide(x, y) << endl;
                break;
            case 5:
                cout << "Введите основание и целую степень: ";
                cin >> x >> y;
                cout << "Результат: " << power(x, (int)y) << endl;
                break;
            case 6:
                cout << "Введите число для вычисления факториала: ";
                cin >> a;
                if(a < 0) cout << "Ошибка: факториал отрицательного числа не определен!\n";
                else cout << "Результат: " << factorial(a) << endl;
                break;
            case 7:
                cout << "Введите два целых числа для битового AND: ";
                cin >> a >> b;
                cout << "Результат: " << my_bit_and(a, b) << endl;
                break;
            case 8:
                cout << "Введите два целых числа для битового OR: ";
                cin >> a >> b;
                cout << "Результат: " << my_bit_or(a, b) << endl;
                break;
            case 9:
                cout << "Введите два целых числа для битового XOR: ";
                cin >> a >> b;
                cout << "Результат: " << my_bit_xor(a, b) << endl;
                break;
            case 10:
                cout << "Введите целое число для битового NOT: ";
                cin >> a;
                cout << "Результат: " << my_bit_not(a) << endl;
                break;
            default:
                cout << "Неверный ввод. Пожалуйста, выберите операцию от 0 до 10.\n";
        }
    } while(choice != 0);

    cout << "Выход из программы\n";
    return 0;
}
