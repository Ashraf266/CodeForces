#include <iostream>

using namespace std;


int main(void)
{
	
	int n,k,p,counter= 0;
	cin >> n;
	cin >> k;
	
	int *arr = new int[n];
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
/*
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
*/

	for(int i=0; i<n; i++)
	{
		if( arr[i] >= arr[k-1] && arr[i] > 0)
		{
			counter++;
		}
	}
	
	cout << counter;
	
	
	
	return 0;
}