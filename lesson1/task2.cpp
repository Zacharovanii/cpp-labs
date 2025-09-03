#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, name);

    std::cout << "Добрый день, " << name << "!" << std::endl;
    return 0;
}
