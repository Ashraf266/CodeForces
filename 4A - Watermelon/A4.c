#include <stdio.h>


int main(void)
{
	
	unsigned int w = 0;
	scanf("%d",&w);
	
	//can divide the watermelon into two parts ---- each of them weighing even number of kilos
	if( (w % 2 == 0) && ((w / 2) %2 == 0))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	
	return 0;
}