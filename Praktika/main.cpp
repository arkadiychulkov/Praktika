#include<iostream>
#include<cstring>
#include "Contact.h"
#include "Colege.h"
#include "Student.h"
#include "Stringa.h"
int main() {
    Stringa pib("Chulkov Arkadii");
    Stringa date("12/12/21");

    Contact studentContact("123456789", "Kiev", "Ukrain");
    Colege studentCollege("123456789", "Mit");
    Student student1(pib, date, studentContact, studentCollege);
    
    student1.Show();
    Student student2(std::move(student1));
    student2.Show();   

    return 0;
}