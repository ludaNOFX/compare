#ifndef STRING_COMPARATOR_H
#define STRING_COMPARATOR_H

#include "../entities/string_entity.h"


class StringComparator{
public:
    static bool compareIgnoreCase(const StringEntity& str1, const StringEntity& str2);

private:
    static char customToLower(char c);
};

#endif // STRING_COMPARATOR_H
