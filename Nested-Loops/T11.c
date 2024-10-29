#include <stdio.h>
int main()
{
        int N,i,j,z;
        printf("Enter the integer N\n");
        scanf("%d",&N);

	i=1;
        while(i<=N)
        {
                z=1;
		while(z<=N)
                {
                        printf(" ");               
		z++;		
		}
		j=1;
	       	while(j<=i)
                {
                        printf("*");
                j++;
		}
                printf("\n");
        i++;
	}
        i=1;
	while(i<=N)
        {
                z=1;
		while(z<=N-i)
                {
                        printf(" ");
                z++;
		}
                j=1;
		while(j<=(2*i-1))
                {
                        printf("*");
                j++;
		}
                printf("\n");
        i++;
	}
        return 0;

}

