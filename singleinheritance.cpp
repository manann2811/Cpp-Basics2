#include<iostream>
#include<string>

using namespace std;

class Laptop
{
public:
	Laptop()
	{
		cout<<"Base Class Called"<<endl;
	}
	string name;
	float price;
};

class gamingLaptop : public Laptop
{
public:
	gamingLaptop()
	{
		cout<<"Derived Class Called"<<endl;
	}
};

int main()
{
	gamingLaptop lap1;
	return 0;
} 