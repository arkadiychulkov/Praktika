#pragma once
#include <iostream>
#include <cstring>

class Colege {
private:
    char* num;
    char* name;

public:
    Colege(const char* _num, const char* _name);
    Colege(const char* _num);
    Colege(bool dummy, const char* _name);
    ~Colege();

    void Showc();
};
