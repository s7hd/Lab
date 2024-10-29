#include <stdio.h>
int main ()
{
	int n;
	printf("Enter the number of minuts ");
	scanf("%d",&n);
	for(int m=0;m<n;m++)
	for(int s=0;s<60;s++)
	printf("%02d:%02d\n",m,s);
	return 0;
}
