#pragma once
#include"Customer.h"
#include"Pizza.h"
class Menu
{
public:
	void ShowMenu(Customer*& list, int size);
	void ShowInfo(Customer*& list, int size);
	void Add(Customer*& list, int size);
};

