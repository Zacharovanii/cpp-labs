#include <iostream>
using namespace std;

int main() {
    int score = 0, extra;
    char bonus;

    do {
        cout << "Введите балл (-1 для выхода): ";
        cin >> score;
        if (score < 0) break;

        cout << "Введите количество доп. заданий: ";
        cin >> extra;
        cout << "Есть бонусный балл? (y/n): ";
        cin >> bonus;

        score += extra * 3;
        if (bonus == 'y' || bonus == 'Y') score += 15;
        if (score > 100) score = 100;

        cout << "Итоговый балл: " << score << " — ";
        if (score >= 90) cout << "Отлично";
        else if (score >= 75) cout << "Хорошо";
        else if (score >= 60) cout << "Удовлетворительно";
        else cout << "Неудовлетворительно";
        cout << endl << endl;
    } while (score >= 0);
}
