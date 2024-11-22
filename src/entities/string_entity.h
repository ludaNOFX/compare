#ifndef STRING_ENTITY_H // Защита от повторного включения
#define STRING_ENTITY_H


class StringEntity {
public:
    char* data; // Динамическое выделение памяти (указатель на массив символов)
    int length; // число хранящее длину символов
    
    // Конструктор
    StringEntity(const char* str);
    
    // Деструктор
    ~StringEntity();
};

#endif // STRING_ENTITY_H