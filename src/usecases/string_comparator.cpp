#include "string_comparator.h"


bool StringComparator::compareIgnoreCase(const StringEntity& str1, const StringEntity& str2){
    int i = 0;
    while (i < str1.length && i < str2.length){
        if (customToLower(str1.data[i]) != customToLower(str2.data[i])){ // проверка копий символов символов
            return false;
        }
        i++;
    }
    return str1.length == str2.length; // Проверка длин строк
}

char StringComparator::customToLower(char c){ // копируем объект char c
    return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c; // (условие) ? выражение1 : выражение2
}