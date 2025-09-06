#include <iostream>
using namespace std;

int main() {
    int value = 100;
    cout << &value << endl;
    cout << value << endl;

    cout << "---------------------------\n";

    int value1 = 101;
    int *value1Ptr = &value1;
    cout << value1Ptr << endl;
    cout << *value1Ptr << endl;

    cout << "---------------------------\n";

    *value1Ptr = 102;
    cout << &value1 << endl;
    cout << value1 << endl;
    cout << value1Ptr << endl;
    cout << *value1Ptr << endl;

    cout << "---------------------------\n";

    int value3 = 103;
    int *value3Ptr = &value3;
    int &value3Ref = value3;
    value3Ref = 104;
    cout << value3 << endl;
    cout << &value3 << endl;
    cout << *value3Ptr << endl;
    cout << value3Ptr << endl;
    cout << value3Ref << endl;
    cout << &value3Ref << endl;
    cout << sizeof(value3) << endl;
    cout << sizeof(value3Ptr) << endl;
    cout << sizeof(value3Ref) << endl;

    return 0;
}
