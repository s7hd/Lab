#include <stdio.h>
int main()
{
	char ch[3];
        int in[3];
	short sh[3];
	double dou[3];
	
	//char *ptr_char=ch;
	//int *ptr_int=in;
	//short *ptr_short=sh;
	//double *ptr_double=dou;
	
	for(int i=0 ; i<3 ; i++)
	{
		printf("Integer Array: %p\n",&in[i]);
	}	
	printf("\n");
	for(int i=0 ; i<3 ; i++)
        {
                printf("Charactor Array: %p\n",&ch[i]);
	}
	printf("\n");
	for(int i=0 ; i<3 ; i++)
        {
                printf("Short Array: %p\n",&sh[i]);
	}
	printf("\n");
	for(int i=0 ; i<3 ; i++)
        {
                printf("Double Array: %p\n",&dou[i]);
	}
	printf("\n");
	return 0;

}
