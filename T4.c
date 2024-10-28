#include <stdio.h>
int main()
{
	int pop[10];
	int max_pop,min_pop;
	float sum=0,mean=0;
	
	printf("Enter the population of the 10 cities:\n");
	for (int i=0;i<10;i++)
	{		
		printf("%d ",i+1);
		scanf(" %d",&pop[i]);
		sum+=pop[i];
		
		if(i==0)
		{
			min_pop=max_pop=pop[i];
		}	
		else
		{
			if (pop[i]>max_pop)
				max_pop=pop[i];
			if (pop[i]<min_pop)
				min_pop=pop[i];
		}	
	}
	printf("population in reverse order:\n ");	
	int j=9;	
	while(j>=0)
	{
		printf("%d ",pop[j]);
		j--;
	}
	printf("\n");	
	mean=sum/10;
	printf("Maximum population: %d\n",max_pop);
        printf("Minimum population: %d\n",min_pop);
        printf("Mean population: %.f\n",mean);

	return 0;

}
