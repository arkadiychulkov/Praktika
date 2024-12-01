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
    Student(const char* _fullName, const char* _birthDate, Contact& _contactInfo, Colege& _collegeInfo);
    ~Student();
    Student(Student&& other);
    void Show();
};
