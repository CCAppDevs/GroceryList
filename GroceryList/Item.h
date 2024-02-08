#pragma once
#include <string>

class Item
{
	// declarations

	// properties of an item
public:
	double Price;
	std::string Name;
	double Weight;

	// constructors
	Item();
	Item(std::string name, double price);
};

