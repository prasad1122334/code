#include <iostream>
using namespace std;
class Publication
{
    private:
        string title;
        float price;
  public:
        Publication() //constructor
        {
            title="";
            price=0.0;
        }

        Publication(string title, float price)
        {
            this->title=title;
            this->price=price;
        }

        void getData()
        {
            cout<<"\nEnter title :";
            cin>>title;
            cout<<"\nEnter price :";
            cin>>price;
            cout<<"\n";
        }
        
        int check()
        {
            if (this -> title == "")
            return 5;

            else
            {
                return 10;
                //break;
            }

        }
        void showData()
        {
            try
            {
                if(title.length()<3)
                    throw title;
                if(price<=0.0)
                    throw price;

                catch(string)
                {
                    cout<<"\nError: Title below 3 characters is not allowed"<<"\n";
                    title="";
                }

                catch(float f)
                {
                    cout<<"\nError: Price not valid: \t"<<f<<"\n";
                    price=0.0;
                }

                cout<<"\nTitle is :"<<title;
                cout<<"\nPrice is :"<<price;
                cout<<"\n\n\n";
            }
};

class Book : public Publication
{
int pages;

     public:

      Book()
      {
      pages = 0;
      }
      void getdata()
      {
      Publication::getData();
      cout<<"Enter No. of pages : ";
      cin>> pages;
        }
        void showdata()
        {
        cout<<"The Book is \n";
        Publication::showData();

        try
        {
        if (pages<=0)
        throw pages;
        }

        catch( int a )
        {
        cout<<"Invalid No. of Pages.\n";
        pages = 0;
        }
        cout<< "No. of Pages :\t" <<pages;

        }


 };

  class Tape : public Publication
 {
    float time;

    public:

        Tape()
        {
            time = 0.0;
        }
        void getdata()
        {
            Publication::getData();
            cout<<"Enter Playtime in minutes : ";
            cin>> time;
        }
        
        void showdata()
        {
            cout<<"The Casette is \n";
            Publication::showData();

        try
        {
            if (time<=0.0)
            throw time;
        }

        catch( float t )
        {
            cout<<"Invalid Playtime.\n";
            time = 0.0;
        }
            cout<< "The Playtime :\t" <<time;

        }


 };
 int main()
 {
    int choice ;

    Book B1;
    Tape T1;

    do
    {
        cout<<"**********Menu**********\n";
        cout<<"1] Enter Data Of Book :\n2] Enter Data Of Tape : \n3]  Display Data Of Book : \n4] Display Data Of Tape\n 5] Exit. \n\n";
        cin>> choice;

    switch(choice)
    {

    case 1: B1.getdata();
            break;

    case 2: T1.getdata();
            break;

    case 3: if(B1.check() == 10)
            {
                B1.showdata();
                break;
            }
            else
            {
                cout<<"No Book Data is Inserted.\n";
                break;
            }
    case 4: if(T1.check() == 10)
            {
                T1.showdata();
                break;
            }
            else
            {
                cout<<"No Tape Data is Inserted.\n";
                break;
            }

    case 5 : cout<<"Thanks, Visit Again." ;
             break;
    }
  }while (choice != 5);
  return 0;
}