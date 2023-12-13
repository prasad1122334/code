#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main()
{
	map<string, int> m;

	do
	{
		cout << "Menu" << endl;
		cout << "1.Insert a New State" << endl;
		cout << "2.Display Records" << endl;
		cout << "3.Search Population" << endl;
		cout << "4.Exit" << endl;
		cout << "Enter Your Choice : ";
		int ch;
		cin >> ch;
		cin.ignore();
					

		string name;
		int population;

		map<string, int>::iterator it = m.begin();

		switch(ch)
		{
			case 1:
					cout << "Enter Name of the State : ";
					getline(cin, name);
					//cin.ignore();
					cout << "Enter Population : ";
					cin >> population;

					m[name] = population;
					break;
			case 2:
					cout << endl << "Items in the Database" << endl;
					cout << setw(20) << "State" << setw(20) << "Population" << endl << endl;
					
					while(it != m.end())
					{
						cout << setw(20) << (*it).first << setw(20) << (*it).second << endl;
						it++;
					}
					break;
			case 3:
					cout << "Enter Name of the State : ";
					getline(cin, name);
					it = m.find(name);
					if(it == m.end())
						cout << name << " not found" << endl;
					else
						cout << (*it).first << "\t" << (*it).second << endl;
					break;
			case 4:
					exit(0);
		}
	}while(1);
	return 0;
}