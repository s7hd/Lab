#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[50];
	float gpa;
};

int main() {
	int numofstd;
	struct student stu[numofstd];
	
	printf("Enter the number of students:");
	scanf(" %d",&numofstd);

	for(int i=0 ; i<numofstd; i++)
	{
		printf("Enter ID for student %d :",i+1);
		scanf(" %d",&stu[i].id);
		printf("Enter name for student %d :",i+1);
		scanf(" %s",stu[i].name);
		printf("Enter GPA for student %d :",i+1);
		scanf(" %f",&stu[i].gpa);
	}
	
	 printf("Student Records :\n");
	for(int j=0 ; j<numofstd ; j++)
	{
		printf("ID: %d ,Name: %s, GPA: %f\n",stu[j].id,stu[j].name,stu[j].gpa);
	}	

}
