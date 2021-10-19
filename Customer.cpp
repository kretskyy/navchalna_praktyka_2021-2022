#include "Customer.h"
#include <string>
#include <iostream>

Customer::Customer()
{
	name_of_pizzeria = "Unknown";
	address = "Unknown";
	telephone = "+380xxxxxxx";
	count_of_pizza = 0;
	max_count = 20;
	list = new Pizza[max_count];
}

Customer::Customer(string new_name_of_pizzeria, string new_address, string new_telephone)
{
	name_of_pizzeria = new_name_of_pizzeria;
	address = new_address;
	telephone = new_telephone;
	count_of_pizza = 0;
	max_count = 20;
	list = new Pizza[max_count];
}

Customer::~Customer()
{
	delete[] list;
}

string Customer::GetName_of_pizzeria() const
{
	return name_of_pizzeria;
}

string Customer::GetAddress() const
{
	return address;
}

string Customer::GetTelephone() const
{
	return telephone;
}

void Customer::AddPizza(Pizza& pizza)
{
	count_of_pizza++;
	if (count_of_pizza > max_count)
	{
		count_of_pizza--;
		throw exception("Out of range");
	}
	list[count_of_pizza - 1] = pizza;
}

void Customer::PrintInfo()
{
	cout << "Name of pizzeria: " << name_of_pizzeria << " Address: " << address << " Telephone: " << telephone << endl;
}

void Customer::PrintList()
{
	for (int i = 0;i < count_of_pizza; i++)
	{
		list[i].PrintInfo();
	}
}

void Customer::SetName(string name)
{
	name_of_pizzeria = name;
}

void Customer::SetAddress(string address)
{
	this->address = address;
}

void Customer::SetTelephone(string telephone)
{
	this->telephone = telephone;
}

void Customer::operator+(Pizza& pizza)
{
	AddPizza(pizza);
}

ostream& operator<<(ostream& out, Customer& customer)
{
	return customer << cout;
}

ostream& Customer::operator<<(ostream& out)
{
	return out << "Name of pizzeria: " << name_of_pizzeria << " Address: " << address << " Telephone: " << telephone << endl;
}