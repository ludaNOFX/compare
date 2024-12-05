#include "src/adapters/string_adapter.h"
#include "src/utils/input_utils.h"
#include <iostream>

int main() {
    const char* str1 = getValidInput();
    const char* str2 = getValidInput();
    

    // вызывается статический метод compareStrings класса StringAdapter куда передаются 2 указателя на строки
    // он возвращает булево значение 
    if (compareStrings(str1, str2)) { 
        std::cout << "Строки равны (игнорируя регистр)" << std::endl;
    } else {
        std::cout << "Строки не равны" << std::endl;
    }
    delete[] str1;
    delete[] str2;
    return 0;
}