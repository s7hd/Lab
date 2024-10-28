#include <stdio.h>
int main()
{
	int N,i,j,z;
	printf("Enter the integer N\n");
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
		for(z=1;z<=N;z++)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("*");
		}	
		printf("\n");
	}	
  	for(i=1;i<=N;i++)
        {
                for(z=1;z<=N-i;z++)
                {
                        printf(" ");
                }
                for (j=1;j<=(2*i-1);j++)
                {       
                        printf("*");
                }       
                printf("\n");
        } 
	return 0;

}	
