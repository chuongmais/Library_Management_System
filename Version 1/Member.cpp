#include "Member.h"

Member::Member(string name, Date birth, Address address, string phone)
{
	this->name = name;
	this->birth = birth;
	this->address = address;
	this->phone = phone;
}

string Member::getName() const
{
	return this->name;
}

Date Member::getBirth() const
{
	return this->birth;
}

Address Member::getAddress() const
{
	return this->address;
}

string Member::getPhone() const
{
	return this->phone;
}

void Member::displayMember() const
{
	cout << "-------------------" << endl;
	cout << "Name: " << this->name << endl;
	cout << "Date of Birth: " << this->birth.toString() << endl;
	cout << "Address: " << this->address.toString() << endl;
	cout << "Phone number: " << this->phone << endl;
	cout << "-------------------" << endl;
}