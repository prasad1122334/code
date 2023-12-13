#include<iostream>
using namespace std;

class Information
{

	public:
		long phoneno;
		char* address;
		char blood[3];
		int height;

		Information()
		{
			phoneno = 0;
			height = 0.0;
			blood = "X++";
			address = new char[50];	
		}
 
		friend class Student;

		~Information()
		{
			delete address;
		}

};
class Student //public Information
{

	char* name;
	int rollno ;
	char* dob ;
	char div;
	char year[2];
	//Information* ptr;
 
	
	public:
		Student()
		{

			name = new char[50];
			rollno = 0;
			dob = new char[10];
			div = 'X';
			year = "";
			ptr = new Information;
		}

		Student(Student& s)
		{

		}

		static void setStudent()
		{
			cout<<"Enter the name of the Student : ";
			cin >> (*name);

			cout<<"Enter Date of Birth of Student : ";
			cin>>(*dob);

			cout<<"Enter Year of Student : ";
			cin>> year;

			cout<<"Enter Division of Student : ";
			cin>> div;

			cout<<"Enter Height of Student : ";
			cin>> ptr->height;

			cout<<"Enter Blood Group of Student : ";
			cin>> ptr->blood;

			cout<<"Enter Phone No. of Student : ";
			cin>> ptr->phoneno;

			cout<<"Enter Year of Student : ";
			cin>> year;

			cout<<"Enter Address of Student : ";
			cin>> ptr ->address;

		}

		inline void showStudent()
		{

			cout<<"\n\n\t\tStudent Details are : ";
			cout<<"\tName : " << *name <<endl;
			cout<<"\tDate of Birth : " << *dob <<endl;
			cout<<"\tYear : " << year <<endl;
			cout<<"\tDivision : " << div <<endl;
			cout<<"\tRoll No. : " << rollno <<endl;
			cout<<"\tBlood: " << ptr->blood<<endl;
			cout<<"\tPhone No. : " << ptr->phoneno<<endl;
			//Exception handling for height;
			try
			{
				if (ptr->height < 3)
					throw ptr->height;
				else
					cout<<"\tHeight : " << ptr->height<<endl;
			}
			catch(int &h)
			{
				h = 4.0;

				cout<<"\n\n\tERROR : Invalid height.\n\n\tHeight is set to default value 4.00 .\n\n";
			}

			cout<<"\tAddress : " << ptr->address <<endl;
		}

		~Student()
		{
			delete name;
			delete dob;
		}

};
static int count = 0;
int main()
{
	Student S1;
	S1.setStudent();
	S1.showStudent();
	return 0;
}
