/*
KSHITIJ RAMAKANT BHALSANE SE A 10
PROBLEM STATEMENT - 
Write a function template for selection sort that inputs, sorts and outputs an integer array and
a float array.

CODE -
*/

#include<iostream>
#define size 20
using namespace std;
int n;
template<class T>
void selection(T A[size])
{ 
   int i,j,min;
    T temp;
    for(i=0;i<n;i++)
    {  min=i;
       for(j=i+1;j<n;j++)
         {   if(A[j]<A[min])
                min=j;
         }
         
          temp=A[i];
          A[i]=A[min];
          A[min]=temp;
    }
    cout<<"\n The sorted list is:...\n";
     for(i=0;i<n;i++)
      cout<<"\t"<<A[i];
}
int main()
{   
    	int i,A[size];
    	float B[size];
    
	cout<<"\n\t\tSelection Sort Program\n";
	cout<<"\n\tHandling Interger Elements";
	cout<<"\nEnter the no. of elements (keep it less than 20): ";
	cin>>n;
	cout<<"\nEnter the Integer Elements ";
 	for(i=0;i<n;i++)
  		cin>>A[i];
	selection(A);
	cout<<"\n\n\n\t\tHandling Float Elements\n";
	cout<<"\nHow Many Elements Are There???\n";
	cin>>n;
	cout<<"\n Enter the Float numbers";
	for(i=0;i<n;i++)
		cin>>B[i];
	selection(B);
	cout<<"\n";
return 0;
}

