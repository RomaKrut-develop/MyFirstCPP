#include <iostream>
#include <string> // Для std::string
#include <windows.h> // Для SetConsoleOutputCP (если Windows)
#include <ctime>    // Для time()

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    short result = 1 + rand() % 100; // задаем параметры генерации случайного числа
    cout << "Случайное число: " << result << endl; // выводим результат математических операций 
    cout << "Введите число: ";
    short input;
    cin >> input;
    
    if (input > 30) {
        cout << "Ваше число больше 30" << endl;
    } else if (input < 30) {
        cout << "Ваше число меньше 30" << endl;
    } else if (input == 30) {
        cout << "Ваше число 30" << endl;
    } else {
        cout << "???";
    }

    cout << "Программа выполнилась. Ожидание 5 секунд перед закрытием..." << endl;
    Sleep(5000); // Задержка 5 секунд (5000 миллисекунд)
    
    return 0; // Закрытие программы
}