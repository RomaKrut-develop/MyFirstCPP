#include <iostream>
#include <string> // Для std::string
#include <windows.h> // Для SetConsoleOutputCP (если Windows)
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Привет, мир" << endl; // выводим текст на русском
    std::cout << "Программа выполнилась. Нажмите Enter для выхода...\n";
    std::cin.get(); // Ожидание нажатия Enter
    return 0; // Закрытие программы
}