#pragma once
#include<cstring>
#include<iostream>
using namespace std;
class Pizza
{
private:
	int size;
	int pieces_num;
	string name;
	int value;
public:
	Pizza();
	Pizza(Pizza& pizza);
	Pizza(string name, int size, int pieces_num);
	string GetName();
	int GetSize();
	int GetPieces_num();
	int GetValue();
	void PrintInfo();
};

