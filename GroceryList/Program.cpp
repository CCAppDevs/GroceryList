#include <iostream>
#include <vector>
#include "GroceryList.h"

using namespace std;

// to be able to add items to a list to be purchased
// get a total of prices
// menu driven

int main()
{
	GroceryList myList;
	bool isRunning = true;
	int choice = -1;

	while (isRunning) {
		// display a menu and ask for what they want to do

		cout << "---------------- Main Menu ----------------\n";
		cout << "1. Add an item.\n";
		cout << "2. Print the List\n";
		cout << "3. Clear the List\n";
		cout << "4. Remove an Item from the List\n";
		cout << "0. Exit\n";

		cout << "\n";
		cout << "What would you like to do? ";

		cin >> choice;

		string name = "";
		double price = 0.0;
		int index = -1;

		switch (choice) {
		case 0:
			cout << "Exiting\n";
			isRunning = false;
			break;
		case 1:
			cout << "What is the name of the item? ";
			cin >> name;
			cout << "What is the price? ";
			cin >> price;
			myList.AddItem(name, price);
			break;
		case 2:
			myList.PrintList();
			break;
		case 3:
			myList.ClearList();
			break;
		case 4:
			cout << "What is the index of the item you would like to remove? ";
			cin >> index;
			myList.RemoveItem(index);
			break;
		default:
			cout << "Invalid option, please try again.\n";
			break;
		}
	}
	
}