#include <stdio.h>
int main()
{
	int *ptr;
	int x=1;
	char *ch=(char*)&x;
	if(sizeof(&ptr)==8)
	{
		printf("It's 64 bit\n");
	}
	else
	{
		printf("It's 32 bit\n");
	}

	if(*ch)
	{
		printf("Little Endian\n");
	}	
	else 
	{
		printf("Big Endian\n");
	}	
	return 0;
}	
