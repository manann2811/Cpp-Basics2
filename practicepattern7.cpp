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
		for(int j=1; j <= ((2*i)-1); j++)
		{
			if((j>=2) && (j < ((2*i)-1)))
				cout<<"0";
			else
				cout<<i;
		}
		cout<<endl;
	}
	return 0;
}