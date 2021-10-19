#include"Customer.h"
#include"Pizza.h"
#include"File_work.h"
#include"Menu.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	File_work manager;
	Customer customer;
	//Customer cust2;
	manager.Read_info("in1.txt", customer);
	//manager.Read_info("in2.txt", cust2);
	Customer* list = new Customer[1];
	//Customer* list = new Customer[2];
	list[0] = customer;
	//list[1] = cust2;
	Menu menu;
	menu.ShowMenu(list, 1);
	//menu.ShowMenu(list, 2);
	return 0;
}