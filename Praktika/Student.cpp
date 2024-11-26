#include "Student.h"

Student::Student(const char* _fullName, const char* _birthDate, Contact _contactInfo, Colege _collegeInfo)
    : contactInfo(_contactInfo), collegeInfo(_collegeInfo) { // я не знаю почему так, я посмотрел в интернете
    strncpy_s(fullName, _fullName, 49);
    fullName[49] = '\0';
    strncpy_s(birthDate, _birthDate, 14);
    birthDate[14] = '\0';
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
