#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		int k=0;
		while(k != (n-i))
		{
			cout<<" ";
			k++;
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=(n-1); i>=1; i--)
	{
		int k=0;
		while(k != (n-i))
		{
			cout<<" ";
			k++;
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
    }
	return 0; 
}