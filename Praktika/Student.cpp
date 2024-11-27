#include "Student.h"
#include <iostream>
#include <cstring>

Student::Student(const char* _fullName, const char* _birthDate, const Contact& _contactInfo, const Colege& _collegeInfo)
    : contactInfo(_contactInfo), collegeInfo(_collegeInfo) {
    fullName = new char[strlen(_fullName) + 1];
    strcpy_s(fullName, strlen(_fullName) + 1, _fullName);

    birthDate = new char[strlen(_birthDate) + 1];
    strcpy_s(birthDate, strlen(_birthDate) + 1, _birthDate);
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
}

void Student::Show() {
    std::cout << "Pib: " << fullName << "\n";
    std::cout << "Date: " << birthDate << "\n";
    std::cout << "Contact:\n";
    contactInfo.Show();
    std::cout << "Colege:\n";
    collegeInfo.Showc();
    std::cout << std::endl;
}
