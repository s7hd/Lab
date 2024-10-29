#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int x,y;
	int M=10;
	
	srand(time(0));

	int xt = rand() %M;
	int yt = rand() %M;
	


	for(int i=0;i<10;i++)
		
			{	
		x=rand() %M;
		y=rand() %M;
		if (x==xt && y==yt)
					{
			printf("Hurrah!, I have found the hidden treasure (%d,%d)\n",x,y);
			break;
					}	
			}
}	
