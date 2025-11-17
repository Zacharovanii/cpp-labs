#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char surname[50], name[50], patronymic[50];
    cout << "Введите фамилию, имя и отчество (латиницей): ";
    cin >> surname >> name >> patronymic;

    char nickname[7];
    nickname[0] = toupper(surname[0]);
    nickname[1] = tolower(surname[1]);
    nickname[2] = tolower(name[0]);
    nickname[3] = tolower(name[1]);
    nickname[4] = tolower(patronymic[0]);
    nickname[5] = tolower(patronymic[1]);
    nickname[6] = '\0';

    cout << "Никнейм: " << nickname << endl;
    return 0;
}
