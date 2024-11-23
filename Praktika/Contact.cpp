#include "Contact.h"
#include<iostream>
#include<cstring>
Contact::Contact(const char* _num[20], const char* _city[15], const char* _country[15])
{
	strncpy_s(num, *_num, 20);
	strncpy_s(city, *_city, 15);
	strncpy_s(country, *_country, 15);
}

Contact::Contact(const char* _num[20], const char* _city[15])
{
	strncpy_s(num, *_num, 20);
	strncpy_s(city, *_city, 15);
}

Contact::Contact(const char* _num[20])
{
	strncpy_s(num, *_num, 20);
}

void Contact::Show() {
	std::cout << num;
	std::cout << city;
	std::cout << country;
}
