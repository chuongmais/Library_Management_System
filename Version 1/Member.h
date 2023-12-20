#pragma once
#include <iostream>
#include "Address.h"
#include "Date.h"

using namespace std;

class Member
{
public:
	Member() = default;
	Member(string name, Date birth, Address address, string phone);
	string getName() const;
	Date getBirth() const;
	Address getAddress() const;
	string getPhone() const;
	void displayMember() const;

private:
	string name;
	Date birth;
	Address address;
	string phone;
};

