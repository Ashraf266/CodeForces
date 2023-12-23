#include <iostream>
using namespace std;




int main(void)
{
	int n;
	int x,y,z;
	int counter = 0;
	
	cin >> n;
	
	for(int i = 0; i<n; i++)
	{
		cin >> x;
		cin >> y;
		cin >> z;
		
		if( x + y + z >= 2)	counter++;
		
	}
	
	
	cout << counter;
	
	
	
	return 0;
}