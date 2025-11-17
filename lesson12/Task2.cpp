#include <iostream>
using namespace std;

struct Animal {
    const char* name;
    const char* species;
    const char* color;
    int age;
    double weight;


    void feed(int days) {
        weight += (weight * 0.01 * days);
    }


    void rename(const char* newName) {
        name = newName;
    }

    void print() {
        cout << "Имя: " << name << endl;
        cout << "Вид: " << species << endl;
        cout << "Окрас: " << color << endl;
        cout << "Возраст: " << age << " лет" << endl;
        cout << "Вес: " << weight << " кг" << endl;
    }
};

int main() {
    Animal a1 = {"Бобик", "Собака", "Рыжий", 3, 10.0};
    a1.print();
    a1.feed(10);
    cout << "\nПосле кормежки:\n";
    a1.print();

    cout << "\n\n";

    Animal* a2 = new Animal{"Мурзик", "Кот", "Черный", 2, 5.5};
    a2->print();
    a2->rename("Барсик");
    a2->feed(7);
    cout << "\nПосле переименования и кормежки:\n";
    a2->print();

    delete a2;
    return 0;
}
