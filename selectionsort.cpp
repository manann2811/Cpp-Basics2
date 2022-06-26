#include<iostream>

using namespace std;

int main()
{
	int arr[] = {1, 3, 5, 4, 2};
	int size = 5;
	int minIndex;
	int temp;

	cout<<"\nUnsorted array is : ";
	for(int i=0; i<size; i++)
		cout<<arr[i];

	for(int i=0; i<size-1; i++)
	{
		minIndex = i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[minIndex]>arr[j])
				minIndex = j;
		}
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}

	cout<<"\nSorted array is : ";
	for(int i=0; i<size; i++)
		cout<<arr[i] ;

	return 0;
}