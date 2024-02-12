#pragma once
#include <vector>
#include <iostream>
#include "Item.h"

using namespace std;

class GroceryList
{
private:
	// put my list
	vector<Item> Items;

public:
	// interface (aka the controls/buttons)

	GroceryList();

	void AddItem(Item theItem);
	void AddItem(string name, double price);

	void PrintList();
	void ClearList();
	void RemoveItem(int index);
	//void UpdateItem(int index, string name, double price, double weight);

	//double GetSubtotal();
};

