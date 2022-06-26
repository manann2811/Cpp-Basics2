#include<iostream>
#include<string>

using namespace std;

class laptop
{
public:
	string name;
	string brand;
	float price;
	string processor;

	void getdata()//  These are member Functions.
	{
		cout<<"Name : ";               
		cin>>name;
		cout<<"Brand : ";
		cin>>brand;
		cout<<"Price : ";
		cin>>price;
		cout<<"Processor : ";
		cin>>processor;
	}

	void showdata()// Member Functions.
	{
		cout<<"\nName : "<<name;
		cout<<"\nBrand : "<<brand;
		cout<<"\nPrice : "<<price;
		cout<<"\nProcessor : "<<processor;
	}

	void startup()
	{
		cout<<"\nLaptop "<<name<<" has started."<<endl;
	}

	void shutdow()
	{
		cout<<"\nLaptop "<<name<<" is shutting down."<<endl;
	}
};

int main()
{
	laptop laptop1;//this is object
	laptop1.getdata();
	laptop1.showdata();
	laptop1.startup();
	return 0;
}