#include "File_work.h"
#include "Pizza.h"
#include "Customer.h"
#include<iostream>
#include<fstream>

void File_work::Read_info(string fileName, Customer& customer)
{
	ifstream input(fileName);
	char* customerName = new char[30];
	input.get(customerName, 30, ',');
	input.get();
	char* customerAddress = new char[30];
	input.get(customerAddress, 30, ',');
	input.get();
	char* customerTelephone = new char[30];
	input.get(customerTelephone, 30);
	input.get();
	customer.SetAddress(customerAddress);
	customer.SetName(customerName);
	customer.SetTelephone(customerTelephone);
	delete[] customerName;
	delete[] customerAddress;
	delete[] customerTelephone;
	while (!input.eof()) {
		char* name = new char[30];
		int size;
		int count;
		input.get(name, 30, ',');
		input.get();
		input >> size;
		input.get();
		input >> count;
		input.get();
		Pizza pizza(name, size, count);
		customer+pizza;
		delete[] name;
	}
	input.close();
}