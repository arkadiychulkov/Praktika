#include "Contact.h"
#include<iostream>
#include<cstring>
Contact::Contact(const char _num[20], const char _city[15], const char _country[15])
{
	strncpy_s(num, _num, 19);
	this->num[20] = '\0';
	strncpy_s(city, _city, 14);
	this->city[15] = '\0';
	strncpy_s(country, _country, 14);
	this->country[15] = '\0';
}

Contact::Contact(const char _num[20], const char _city[15])
{
	strncpy_s(num, _num, 20);
	this->num[20] = '\0';
	strncpy_s(city, _city, 14);
	this->city[15] = '\0';
}

Contact::Contact(const char _num[20])
{
	strncpy_s(num, _num, 19);
	this->num[20] = '\0';
	this->city[15] = '\0';
	this->country[15] = '\0';
}

Contact::~Contact() {

}

void Contact::Show() {
	if (this->num)
	{
		std::cout << this->num;
	}if (this->city)
	{
		std::cout << this->city;
	}
	if (this->country)
	{
		std::cout << this->country;
	}
	std::cout << std::endl;
}
