#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main()
{

	map <string , int> m;
	int pop;
	string state;

	map<string , int>::iterator it;
	char ch;
	do
	{
		cout<<"\t\t\t*****MENU*****\n\t1. Enter State in database.\n\t2. Display database. \n\t3. Search Records.\n\t4. Exit.\n\n\t\tEnter Your Choice : ";
		cin>> ch;


		switch(ch)
		{

			case '1': 
					cout<<"Enter the Name of The State : ";
					cin>>state;

					cout<<"Enter the Population (In Crores) : ";
					cin>>pop;

					m[state] = pop;
					break;
			case '2' :
					cout<<"\n\n\t\tPopulation Database :\n\n\t\tState\t\t\tPopulation\n\n";

					for(it = m.begin() ; it != m.end() ; it++)
						cout<<"\t\t"<<(*it).first <<"\t\t\t"<<(*it).second<<endl;
					break;
			case '3' :
					cout<<"Enter The state to be searched : ";
					cin>>state;

					it = m.find(state);

					if (it == m.end())
					{
						cout<<state <<" is not in the Database\n";
					}
					else
						cout<<state << " found"<< "Population : " << (*it).second;
					break;
			case '4':
					cout<<"\n\nThanks!!!!!!";
					exit(0);
		}

	}while(1);
	return 0;
}
