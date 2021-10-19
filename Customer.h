#pragma once
#include <string>
#include <iostream>
#include"Pizza.h"
using namespace std;

class Customer
{
public:
	Customer();

	Customer(string new_name_of_pizzeria, string new_address, string new_telephone);

	~Customer();

	string GetName_of_pizzeria() const;

	string GetAddress() const;

	string GetTelephone() const;
	 
	void AddPizza(Pizza& pizza);

	void PrintInfo();

	void PrintList();

	void SetName(string name);

	void SetAddress(string address);

	void SetTelephone(string telephone);

	void operator+(Pizza& pizza);

	friend ostream& operator<<(ostream& out, Customer& customer);

	ostream& operator<<(ostream& out);
private:
	string name_of_pizzeria, address, telephone;
	int count_of_pizza;
	int max_count;
	Pizza* list;
};

