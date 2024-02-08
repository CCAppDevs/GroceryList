#include "Item.h"

// definitions

Item::Item()
{
	Name = "";
	Price = 0.0;
	Weight = 0.0;
}

Item::Item(std::string name, double price)
{
	Name = name;
	Price = price;
	Weight = 1.0;
}
