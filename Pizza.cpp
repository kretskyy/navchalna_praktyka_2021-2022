#include "Pizza.h"
Pizza::Pizza()
{
	size = 1;
	pieces_num = 1;
	name = "Defoult";
	value = size * pieces_num * 26;
}

Pizza::Pizza(Pizza& pizza)
{
	name = pizza.GetName();
	size = pizza.GetSize();
	pieces_num = pizza.GetPieces_num();
	value = size * pieces_num * 26;
}

Pizza::Pizza(string name, int size, int pieces_num)
{
	this->name = name;
	this->size = size;
	this->pieces_num = pieces_num;
	value = size * pieces_num * 26;
}

string Pizza::GetName()
{
	return name;
}

int Pizza::GetSize()
{
	return size;
}

int Pizza::GetPieces_num()
{
	return pieces_num;
}

int Pizza::GetValue()
{
	return value;
}

void Pizza::PrintInfo()
{
	cout << "Name: " << name << " Size: " << size << " Pieces_num: " << pieces_num << " Value: " << value << endl;
}