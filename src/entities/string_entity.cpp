#include "string_entity.h"

// Функция определения длины строки
int my_strlen(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Функция копирования строки
void my_strcp(char* dest, const char* src) {
    while ((*dest++ = *src++) != '\0'); // (dest - куда) (src - откуда)
}


StringEntity::StringEntity(const char* str){
    length = my_strlen(str);
    data = new char[length + 1]; // выделение памяти для строки и нулевого символа
    my_strcp(data, str); // копирование строки
}

StringEntity::~StringEntity(){
    delete[] data; // освобождение памяти
}