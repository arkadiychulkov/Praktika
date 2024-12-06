#include "Student.h"
#include "Stringa.h"
#include <iostream>
#include <cstring>

Student::Student(Stringa _fullName, Stringa _birthDate, Contact& _contactInfo, Colege& _collegeInfo)
    : fullName(std::move(_fullName)), birthDate(std::move(_birthDate)),
    contactInfo(std::move(_contactInfo)), collegeInfo(std::move(_collegeInfo)) {}


Student::~Student() {
    fullName.Delete();
    birthDate.Delete();
}

Student::Student(Student&& other)
    : contactInfo(std::move(other.contactInfo)), collegeInfo(std::move(other.collegeInfo)), fullName(std::move(other.fullName)), birthDate(std::move(other.birthDate)) {
    fullName.Delete();
    birthDate.Delete();
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
