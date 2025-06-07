#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: "; // Запрос имени пользователя
    std::cin >> name;
    std::cout << "Hello, World! from " << name << std::endl; // Вывод приветствия
    return 0;
}
