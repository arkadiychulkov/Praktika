#pragma once
#include <iostream>
#include <cstring>
#include "Contact.h"
#include "Colege.h"

class Student {
private:
    char* fullName;
    char* birthDate;
    Contact contactInfo;
    Colege collegeInfo;

public:
    Student(const char* _fullName, const char* _birthDate, const Contact& _contactInfo, const Colege& _collegeInfo);
    ~Student();

    void Show();
};
