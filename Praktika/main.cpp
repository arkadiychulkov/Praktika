#include<iostream>
#include "Contact.h"
#include<cstring>

int main() {
    Contact contact1("1234567890", "AAA", "BBB");
    contact1.Show();

    Contact contact2("0987654321", "AAA");
    contact2.Show();

    Contact contact3("1112223333");
    contact3.Show();

}