#pragma once
#include <iostream>
#include <cstring>

class Contact {
private:
    char num[20];
    char city[15];
    char country[15];

public:
    Contact(const char _num[20], const char _city[15], const char _country[15]);
    Contact(const char _num[20], const char _city[15]);
    Contact(const char _num[20]);
    ~Contact();
    void Show();
};
