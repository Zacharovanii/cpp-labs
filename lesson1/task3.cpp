#include <iostream>
#include <string>

int main() {
    std::string color;
    std::cout << "Какой ваш любимый цвет? ";
    std::getline(std::cin, color);

    std::cout << "Мне тоже нравится " << color << " цвет." << std::endl;
    return 0;
}
