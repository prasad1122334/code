#include<iostream>
#include<iomanip>

#include<vector>
#include<algorithm>



using namespace std;

class Item
{	
	public:
		int code;
		string name;
		float cost;
		int quantity;

		Item(int id = 0, string n = "" , float c = .0f, int q = 0)
		{
			code = id;
			name = n;
			cost = c;
			quantity = q;
		}
		void show()
		{
			cout << setw(15) << code << setw(15) << name << setw(15) << cost 
					<< setw(15) << quantity << endl;
		}
};
bool compareByCode(const Item& i1, const Item& i2)
{
	return i1.code < i2.code;
}
bool compareByName(const Item& i1, const Item& i2)
{
	return i1.name < i2.name;
}
bool compareByCost(const Item& i1, const Item& i2)
{
	return i1.cost < i2.cost;
}
bool compareByQuantity(const Item& i1, const Item& i2)
{
	return i1.quantity < i2.quantity;
}

int main()
{
	vector<Item> items;

	do
	{
		cout << "Menu" << endl;
		cout << "1.Insert a New Item" << endl;
		cout << "2.Display Records" << endl;
		cout << "3.Sort" << endl;
		cout << "4.Exit" << endl;
		cout << "Enter Your Choice : ";
		int ch1, ch2;
		cin >> ch1;

		int code,quantity;
		float cost;
		string name;

		switch(ch1)
		{
			case 1:
					cout << "Enter Code : ";
					cin >> code;
					cout << "Enter Name : ";
					cin >> name;
					cout << "Enter Cost : ";
					cin >> cost;
					cout << "Enter quantity : ";
					cin >> quantity;

					items.push_back(Item(code, name, cost, quantity));
					break;
			case 2:
					cout << endl << "Items in the Database" << endl;
					cout << setw(15) << "Code" << setw(15) << "Name" << setw(15) << "Cost" 
								     << setw(15) << "Quantity" << endl << endl;
					for(auto i = items.begin() ; i != items.end() ; i++)
						(*i).show();
					break;
			case 3:
					cout << "1 : Sort By Code" << endl << "2 : Sort By Name" << endl;
					cout << "3 : Sort By Cost" << endl << "4 : Sort By Quantity" << endl;
					cout << "Enter Your Choice : ";
					cin >> ch2;
					switch(ch2)
					{
						case 1:
								sort(items.begin() , items.end() , compareByCode);
								break;
						case 2:
								sort(items.begin() , items.end() , compareByName);
								break;
						case 3:
								sort(items.begin() , items.end() , compareByCost);
								break;
						case 4:
								sort(items.begin() , items.end() , compareByQuantity);
					
					}
					
					break;
			case 4:
					exit(0);
		}
	}while(1);
	return 0;
}