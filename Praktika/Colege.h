#pragma once
#include <iostream>
#include <cstring>

class Colege {
private:
    char num[10];
    char name[15];

public:
    Colege(const char* _num, const char* _name);
    Colege(const char* _num);
    Colege(bool dummy, const char* _name);

    void Showc();
};
