#include <iostream>
#include <string> // Для std::string
#include <windows.h> // Для SetConsoleOutputCP (если Windows)
#include <ctime>    // Для time()

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    short result = 1 + rand() % 100; // задаем параметры генерации случайного числа
    cout << result << endl; // выводим результат математических операций 
    cout << "Привет, мир" << endl; // выводим текст на русском
    cout << "Программа выполнилась. Нажмите Enter для выхода...\n";
    cin.get(); // Ожидание нажатия Enter
    return 0; // Закрытие программы
}