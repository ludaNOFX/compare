#include <iostream>
#include <limits>
#include "input_utils.h"

using namespace std;

char* getValidInput()
{
    const int MAX_LENGTH = 256; // константа максимальная длина входной строки
    char* input = new char[MAX_LENGTH]; // выделение памяти для строки
    int index = 0;
    char ch;

    cout << "Введите строку: ";

    // Чтение символов, пока не будет достигнут символ новой строки
    while (index < MAX_LENGTH - 1){ // ограничение по максимальной длине строки
        ch = getchar(); // считываем 1 символ
        if (ch == '\n'){ // если символ переноса строки то завершить ввод
            break;
        }
        if (ch != '\n'){
            input[index++] = ch; // добавляем символ в массив
        }
    }
    input[index] = '\0'; // добавляем нулевой терминатор


    // Проверка на пустую строку
    if (index == 0){
        cout<<"Ошибка: строка не должна быть пустой. Повторите ввод." << endl;
        delete[] input; // освобождение памяти в случае ошибки
        return getValidInput(); // рекурсивный вызов для повторного ввода
    }

    return input; // возвращаем указатель на введенную строку

}

