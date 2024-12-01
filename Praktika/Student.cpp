#include "Student.h"
#include <iostream>
#include <cstring>

Student::Student(const char* _fullName, const char* _birthDate, Contact& _contactInfo, Colege& _collegeInfo)
    : contactInfo(std::move(_contactInfo)), collegeInfo(std::move(_collegeInfo)) {
    fullName = new char[strlen(_fullName) + 1];
    strcpy_s(fullName, strlen(_fullName) + 1, _fullName);

    birthDate = new char[strlen(_birthDate) + 1];
    strcpy_s(birthDate, strlen(_birthDate) + 1, _birthDate);
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
}

Student::Student(Student&& other)
    : contactInfo(std::move(other.contactInfo)), collegeInfo(std::move(other.collegeInfo)), fullName(other.fullName), birthDate(other.birthDate) {
    other.fullName = nullptr;
    other.birthDate = nullptr;
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
