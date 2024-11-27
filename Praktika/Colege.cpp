#include "Colege.h"
#include <iostream>
#include <cstring>

Colege::Colege(const char* _num, const char* _name) {
    num = new char[strlen(_num) + 1];//не помню юзали или нет но я знаю
    strcpy_s(num, strlen(_num) + 1, _num);

    name = new char[strlen(_name) + 1];
    strcpy_s(name, strlen(_name) + 1, _name);
}

Colege::Colege(const char* _num) {
    num = new char[strlen(_num) + 1];
    strcpy_s(num, strlen(_num) + 1, _num);

    name = nullptr;
}

Colege::Colege(bool dummy, const char* _name) {
    num = nullptr;

    name = new char[strlen(_name) + 1];
    strcpy_s(name, strlen(_name) + 1, _name);
}

Colege::~Colege() {
    delete[] num;
    delete[] name;
}

void Colege::Showc() {
    if (num) {    
        std::cout << num << " ";
    }
    if (name) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
}
