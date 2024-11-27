#pragma once
#include <iostream>
#include <cstring>

class Contact {
private:
    char* num;
    char* city;
    char* country;

public:
    Contact(const char* _num, const char* _city, const char* _country);
    Contact(const char* _num, const char* _city);
    Contact(const char* _num);
    ~Contact();

    void Show();
};
