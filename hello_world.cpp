#include <iostream>  // подключаем библиотеку для ввода/вывода

int main() {
    std::string name;
    std::cout << "Enter your name: ";  // просим ввести имя
    std::cin >> name;
    std::cout << "Hello, world from " << name << "!";  // выводим приветствие
    return 0;
}
