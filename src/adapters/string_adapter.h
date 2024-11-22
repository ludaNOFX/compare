#ifndef STRING_ADAPTER_H
#define STRING_ADAPTER_H

#include "../entities/string_entity.h"

class StringAdapter {
public:
    static bool compareStrings(const char* str1, const char* str2); // передаем 2 const указателя на 2 строки
};

#endif // STRING_ADAPTER_H