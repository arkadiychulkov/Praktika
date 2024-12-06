#pragma once
#include <iostream>
#include <cstring>
#include "Contact.h"
#include "Colege.h"
#include "Stringa.h"

class Student {
private:
    Stringa fullName;
    Stringa birthDate;
    Contact contactInfo;
    Colege collegeInfo;

public:
    Student(Stringa _fullName, Stringa _birthDate, Contact& _contactInfo, Colege& _collegeInfo);
    ~Student();
    Student(Student&& other);
    void Show();
};
