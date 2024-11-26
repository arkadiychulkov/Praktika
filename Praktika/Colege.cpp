#include "Colege.h"
#include <iostream>
#include <cstring>

Colege::Colege(const char* _num, const char* _name) {
    strncpy_s(num, _num, 9);
    num[9] = '\0';
    strncpy_s(name, _name, 14);
    name[14] = '\0';
}

Colege::Colege(const char* _num) {
    strncpy_s(num, _num, 9);
    num[9] = '\0';
    name[0] = '\0';
}

Colege::Colege(bool dummy, const char* _name) {
    name[0] = '\0';
    strncpy_s(name, _name, 14);
    name[14] = '\0';
    num[0] = '\0';
}

void Colege::Showc() {
    if (this->num)
    {
        std::cout << this->num << " ";
    }
    if (this->name)
    {
        std::cout << this->name << " ";
    }
    std::cout << std::endl;
}
