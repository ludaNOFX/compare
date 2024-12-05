#include "string_adapter.h"
#include "../usecases/string_comparator.h"

bool compareStrings(const char* str1, const char* str2) {
    StringEntity string1(str1); // создаем объект первой строки
    StringEntity string2(str2); // создаем объект второй строки
    //возвращаем булево значиение вызывав метод класса StringComparator который сравнивает 2 объекта класса StringEntity игнорируя регистр
    return compareIgnoreCase(string1, string2);
}