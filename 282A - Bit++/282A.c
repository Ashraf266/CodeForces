#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	
	int x;	/* Number of lines */
	int i;
	int j;
	char *ptr;	/* pointer for the allocation */
	int counter = 0;
	
	scanf("%d",&x);
	ptr = (char *)malloc(3*x);
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf(" %c",ptr+3*i+j);
		}
	}
	
	
/* for checking if we get the input right */
/*
	for(i=0; i<x; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%c",*(ptr+3*i+j));
		}
	}
*/


	for(i=0; i<x; i++)
	{
		if(*(ptr+3*i+1) == '+')
		{
			counter++;
		}
		else
		{
			counter--;
		}
	}
	
	printf("%d",counter);
	
	
	
	return 0;
}