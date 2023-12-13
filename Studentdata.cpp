/*
Develop a program in C++ to create a database of student’s information system containing the
following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact
address, Telephone number, Driving license no. and other. Construct the database with
suitable member functions. Make use of constructor, default constructor, copy constructor,
destructor, static member functions, friend class, this pointer, inline code and dynamic
memory allocation operators-new and delete as well as exception handling.
*/

#include<iostream>
#include<string.h>
#include<typeinfo>
#include<stdexcept>

using namespace std;

class Information
{
char license[10] , address[20];
long int contact ;

    public:

Information() //Default constructor;
{
strcpy(address,"ABC");
strcpy(license,"XY-0000000000");
contact=0000000000;
}

~Information() //Destructor;
{
cout<<"I am in Destructor";
}

friend class Person;

};

class Person
{
char blood[5] , name[20] , dob[10] , division , year[3] ;
static int rollno ;
float ht , wt ;
Information* ptr;
    public :
   
Person() //Default constructor
{
strcpy(name,"XYZ");
strcpy(dob,"dd/mm/yy");
strcpy(blood,"A +");
division = 'X';
char* year;
year = new char[5];
strcpy(year , "FE");
ht=0.0;
wt=0.0;
ptr = new Information;
}

void getdata()
{
cout <<"Enter name of the student : ";
cin >> name;

cout <<"Enter Date of Birth : ";
cin >> dob;

cout <<"Enter BloodGroup of the student : ";
cin >> blood;

cout <<"Enter height: ";
cin >> ht;

try
{
if (ht<4.0)
{
   ht = 0.0;
throw(ht);
}
}
catch(float ht)
{
//throw runtime_error("\n height should greater than 4 ft");
cout<<"Invalid height : Height is set back to 0.0\n";
ht = 0.0;
}

cout <<"Enter weight: ";
cin >> wt;

cout <<"Enter Year: ";
cin >> year;

cout <<"Enter Division: ";
cin >> division;

cout<< "Enter Licence no. : ";
cin >> ptr ->license;

cout<< "Enter Contact no. : ";
cin >> ptr ->contact;

}

void showdata();

};
void Person :: showdata()
{
cout << " Name : " << name <<endl;
cout << " DOB : "<< dob<<endl;
cout << " Year : "<< year<<endl;
cout << " Division : "<< division<<endl;
cout << " Height : "<< ht<<endl;
cout << " Weight : "<< wt <<endl;
cout << " Licence no. : "<< ptr ->license <<endl;
cout << " Contact no. : "<< ptr ->contact <<endl;

}

int main()
{
Person P1;
cout<< "Enter Data for a person\n\n";
P1.getdata();
P1.showdata();

}
