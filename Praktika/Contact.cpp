#include "Contact.h"
#include <iostream>
#include <cstring>

Contact::Contact(const char* _num, const char* _city, const char* _country) {
    num = new char[strlen(_num) + 1];
    strcpy_s(num, strlen(_num) + 1, _num);

    city = new char[strlen(_city) + 1];
    strcpy_s(city, strlen(_city) + 1, _city);

    country = new char[strlen(_country) + 1];
    strcpy_s(country, strlen(_country) + 1, _country);
}

Contact::Contact(const char* _num, const char* _city) {
    num = new char[strlen(_num) + 1];
    strcpy_s(num, strlen(_num) + 1, _num);

    city = new char[strlen(_city) + 1];
    strcpy_s(city, strlen(_city) + 1, _city);

    country = nullptr;
}

Contact::Contact(const char* _num) {
    num = new char[strlen(_num) + 1];
    strcpy_s(num, strlen(_num) + 1, _num);

    city = nullptr;
    country = nullptr;
}

Contact::Contact(Contact&& other) : num(other.num), city(other.city), country(other.country) {
    other.num = nullptr;
    other.city = nullptr;
    other.country = nullptr;
}

Contact::~Contact() {
    delete[] num;
    delete[] city;
    delete[] country;
}

void Contact::Show() {
    if (num) {
        std::cout << num << " ";
    }
    if (city) {
        std::cout << city << " ";
    }
    if (country) {
        std::cout << country << " ";
    }
    std::cout << std::endl;
}
