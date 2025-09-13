#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите два числа:\n";
    cin >> a >> b;

    int *pa = &a, *pb = &b;

    int maxVal = (*pa > *pb) ? *pa : *pb;
    int minVal = (*pa > *pb) ? *pb : *pa;

    cout << "Порядок убывания: " << maxVal << " " << minVal << endl;
    return 0;
}
