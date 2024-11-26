#include<iostream>
#include<cstring>
#include "Contact.h"
#include "Colege.h"
#include "Student.h"
int main() {
    /*Contact contact1("123456789", "AAA", "BBB");
    contact1.Show();

    Contact contact2("098765421", "AAA");
    contact2.Show();

    Contact contact3("111222333");
    contact3.Show();*/


    /*Colege col1("123456789", "Mit");
    col1.Showc();

    Colege col2(true, "987654321");
    col2.Showc();

    Colege col3("Oxford");
    col3.Showc();*/

    Contact studentContact("123456789", "Kiev", "Ukrain");
    Colege studentCollege("123456789", "Mit");

    Student student1("Chulkov Arkadii", "12/12/21", studentContact, studentCollege);
    student1.Show();

    return 0;

}