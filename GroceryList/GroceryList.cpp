#include "GroceryList.h"

GroceryList::GroceryList()
{
	// don't need to do anything
}

void GroceryList::AddItem(Item theItem)
{
	cout << "Adding " << theItem.Name << " to the list.\n";
	Items.push_back(theItem);
}

void GroceryList::AddItem(string name, double price)
{
	cout << "Adding " << name << " to the list.\n";
	Items.push_back(Item(name, price));
}

void GroceryList::PrintList()
{
	// tell the user what we are doing
	cout << "----------------------------------\n";
	cout << "---------- Grocery List ----------\n";
	cout << "----------------------------------\n";

	// one item at a time
	for (int i = 0; i < Items.size(); i++) {
		cout << i + 1 << ")\t" << Items[i].Name << "\t" << Items[i].Price << "\t" << Items[i].Weight << "\n";
	}
	// print the item, price, weight to the screen

// finish the list or just end
	cout << "----------------------------------\n";
	cout << "----------   End List   ----------\n";
	cout << "----------------------------------\n";
}

void GroceryList::ClearList()
{
	cout << "Clearing the list...\n";
	Items.clear();
}
