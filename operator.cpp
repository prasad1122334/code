#include<iostream>

using namespace std;

class Complex
{
	int real, imag ;

	public :

		Complex(int r = 0 , int i = 0)
		{
			real = r;
			imag = i;
		}


		Complex operator+(Complex c)
		{
			Complex temp;

			temp.real = real+c.real;
			temp.imag = imag+c.imag;
			return temp;
		}

		Complex operator*(Complex c)
		{
			Complex temp;

			temp.real = real*c.real - imag*c.imag;
			temp.imag = real*c.imag + imag*c.real;
			return temp;
		}

		friend istream& operator>>(istream& , Complex& );
		friend ostream& operator<<(ostream& , Complex& );

};

		istream& operator>>(istream& cin , Complex& c)
		{
			cin>> c.real;
			cin>>c.imag;
			return cin;
		}

		ostream& operator<<(ostream& cout , Complex& c)
		{
			cout<<c.real <<" + ";
			cout<<c.imag<<"i";
			return cout;
		}

int main()
{
	Complex c1,c2,c3,c4;
	int r1,r2 , i1 , i2;

	cout<<"Enter the Complex number : ";
	cin>>c1;

	cout<<"Enter the Complex number : ";
	cin>>c2;


	c3 = c1 + c2;
	c4 = c1*c2;	
	cout<<"Their Sum is : "<<c3 << endl;

	cout<<"Their Product is : "<<c4 << endl;

	return 0;
}