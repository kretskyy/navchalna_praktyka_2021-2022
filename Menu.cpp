#include "Menu.h"
#include"Customer.h"
#include"Pizza.h"
#include <iostream>
using namespace std;

void Menu::ShowMenu(Customer*& list, int size)
{
	cout << "Welcome to my pizzerias!" << endl;
	cout << "1. See info about pizzeria" << endl;
	cout << "2.Add pizza to the menu" << endl;
	int option;
	cin >> option;
	if (option == 1)
	{
		ShowInfo(list, size);
		ShowMenu(list, size);
	}
	if (option == 2)
	{
		Add(list, size);
		ShowMenu(list, size);
	}
}
void Menu::ShowInfo(Customer*& list, int size)
{
	for (int i = 0; i < size; i++)
	{
		//list[i].PrintInfo();
		cout << list[i];
	}
	cout << "Information of which pizza you want to see? " << endl;
	int option;
	cin >> option;
	list[option - 1].PrintList();
}
void Menu::Add(Customer*& list, int size)
{
	for (int i = 0; i < size; i++)
	{
		list[i].PrintInfo();
	}
	cout << "Pizza to which pizzeria you want to add? " << endl;
	int option;
	cin >> option;
	string name;
	int sizeOfPizza;
	int count;
	cout << "enter name of pizza: ";
	cin >> name;
	cout << "enter size of pizza: ";
	cin >> sizeOfPizza;
	cout << "enter count of pieces: ";
	cin >> count;
	try {
		Pizza pizza(name, sizeOfPizza, count);
		list[option - 1].AddPizza(pizza);
	}
	catch (char* error) {
		cout << error << endl;
	}
}
