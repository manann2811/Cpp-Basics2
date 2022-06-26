#include<iostream>

using namespace std;

int main()
{
	int n, i;
	cout<<"Enter number to check prime : ";
	cin>>n;
	for(i=2; i*i<n; i++)
	{
		cout<<i<<endl;
		if((n%i)==0)
		{
			cout<<"is not a prime number."<<endl;
			break;
		}
	}
	if(i*i>n)
		cout<<"is a prime number."<<endl;

	return 0;
}