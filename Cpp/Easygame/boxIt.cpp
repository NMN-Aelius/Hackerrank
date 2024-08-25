#include<iostream>

using namespace std;

class Box
{
    private:
        int length, breadth, height;
    public:
        //default value constructor
        Box(): length(0), height(0), breadth(0) {}
        //argument fcn constructor
        Box(int l, int b, int h): length(l), height(h), breadth(b) {}
        //copy constructor
        Box(const Box& b): length(b.length), height(b.height), breadth(b.breadth) {}

        //Get info
        int getLength() const {return length;}
        int getBreadth() const {return breadth;}
        int getHeight() const {return height;}

        long long CalculateVolume()
        {
            return static_cast<long long>(length)*height*breadth;
        }

        bool operator<(const Box& b)
        {
            if(length < b.length) return 1;
            if(length == b.length && breadth < b.breadth) return 1;
            if(length == b.length && breadth == b.breadth && height < b.height) return 1;
            return 0;
        }

        friend ostream& operator<<(ostream& out, const Box& b)
        {
            out << b.length << ' ' << b.breadth << ' ' << b.height;
            return out;
        }
};
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}