#include <stdio.h>
#define PI 3.14159

int addint (int a, int b){
	return a+b;}	
float addfloat (float a, float b){
	return a+b;}	
float areacircle (float areacircle){
	return PI*(2*areacircle);}
float arearec (float l , float w){
	return w*l;}
int factorial (int n){
	if (n==0)
		return 1;
	else
		return n*factorial (n-1);
}
int main()
{
		int a=3,b=4;
		printf("Addition of any two integer numbers %d and %d = %d\n",a,b,addint(a,b));
		
		float c=3.2,d=3;
                printf("Addition of any two integer numbers %f and %f = %f\n",c,d,addfloat(c,d));

		float e=3.5;
                printf("Addition of any two integer numbers %f = %f\n",e,areacircle(e));

		float g=5,h=4.5;
                printf("Addition of any two integer numbers %f and %f = %f\n",g,h,arearec(g,h));

		int i=3;
                printf("Addition of any two integer numbers %d = %d\n ",i,factorial(i));

	return 0;


}	
