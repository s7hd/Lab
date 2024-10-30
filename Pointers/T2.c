#include <stdio.h>
#include <string.h>
int main()
{
	char name[9];
	char rename[9];
	int len;
	
	printf("Enter Shahad:");
	scanf("%8s",name);
	len=strlen(name);
	
	for(int i=0;i<len;i++)
	{
		rename[i]=name[len-1-i];
	}
	rename[len]='\0';
	printf("rename:%s\n",rename);
	
	return 0;
}
