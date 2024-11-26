#include<iostream>
#include "Contact.h"
#include<cstring>

int main() {
    Contact contact1("123456789", "AAA", "BBB");
    contact1.Show();

    Contact contact2("098765421", "AAA");
    contact2.Show();

    Contact contact3("111222333");
    contact3.Show();

}