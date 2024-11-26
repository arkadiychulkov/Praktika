#pragma once
#include <iostream>
#include <cstring>
#include "Contact.h"
#include "Colege.h"

class Student {
private:
    char fullName[50];
    char birthDate[15];
    Contact contactInfo;
    Colege collegeInfo;

public:
    Student(const char* _fullName, const char* _birthDate, Contact _contactInfo, Colege _collegeInfo);

    void Show();
};
