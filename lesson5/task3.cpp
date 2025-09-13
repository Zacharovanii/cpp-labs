#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите два числа:\n";
    cin >> a >> b;

    int *pa = &a, *pb = &b;

    bool aEven = ((*pa & 1) == 0);
    bool bEven = ((*pb & 1) == 0);

    if (aEven != bEven) {
        // разная четность -> меняем местами
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
    } else if (aEven && bEven) {
        // оба четные -> увеличиваем в 2 раза (сдвиг влево)
        *pa = *pa << 1;
        *pb = *pb << 1;
    } else {
        // оба нечетные -> уменьшаем в 2 раза (сдвиг вправо)
        *pa = *pa >> 1;
        *pb = *pb >> 1;
    }

    cout << "Результат: a=" << *pa << ", b=" << *pb << endl;
    return 0;
}
