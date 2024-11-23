#include "Contact.h"
#include<iostream>
#include<CSTRING>
Contact::Contact(char _num[20], char _city[15], char _country[15])
{
	strncpy_s(num, _num, 20);
	strncpy_s(city, _city, 15);
	strncpy_s(country, _country, 15);
}

Contact::Contact(char _num[20], char _city[15])
{
	strncpy_s(num, _num, 20);
	strncpy_s(city, _city, 15);
}

Contact::Contact(char _num[20])
{
	strncpy_s(num, _num, 20);
}

void Contact::Show() {
	std::cout << num;
	std::cout << city;
	std::cout << country;
}
