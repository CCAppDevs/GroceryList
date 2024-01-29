#include <iostream>
#include <vector>

using namespace std;

// to be able to add items to a list to be purchased
// get a total of prices
// menu driven

struct Item {
    double Price;
    string Name;
    double Weight;

    // default constructor - sets up item for first use - 
    Item() {
        Price = 0.0;
        Name = "";
        Weight = 0.0;
    }

    // overloaded constructor
    Item(string name, double price) {
        Price = price;
        Name = name;
        Weight = 0.0;
    }
};

int sum(vector<int> items);
int recursiveSum(int min, int max);
void displayList(vector<Item> list);

int main()
{
    vector<Item> items;
    Item toast = Item("Toast", 0.5);
    Item eggs = Item("Eggs", 1.95);
    Item milk = Item("Milk", 4.50);
    Item callofduty = Item("Call of Duty", 69.95);

    items.push_back(toast);
    items.push_back(eggs);
    items.push_back(milk);
    items.push_back(callofduty);

    displayList(items);

    /*cout << "My item is: " << myItem.Name << "\n";
    cout << "The price is: " << myItem.Price << "\n";*/
}

int sum(vector<int> items)
{
    int result = 0;

    for (int i = 0; i < items.size(); i++) {
        result = result + items[i];
    }

    return result;
}

int recursiveSum(int min, int max) {
    // end condition
    if (min >= max) {
        return min;
    }

    // unit of work
    return min + recursiveSum(min + 1, max);
}

void displayList(vector<Item> list) {
    // process the list

    // tell the user what we are doing
    cout << "----------------------------------\n";
    cout << "---------- Grocery List ----------\n";
    cout << "----------------------------------\n";

    // one item at a time
    for (int i = 0; i < list.size(); i++) {
        cout << i + 1 << ")\t" << list[i].Name << "\t" << list[i].Price << "\t" << list[i].Weight << "\n";
    }
        // print the item, price, weight to the screen

    // finish the list or just end
    cout << "----------------------------------\n";
    cout << "----------   End List   ----------\n";
    cout << "----------------------------------\n";
}