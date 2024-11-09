#include <stdio.h>
#include <string.h>

int stringLengh(char sentence[]);
int Numberofwords(char sentence[],int strLength);
int numofvowels(char sentence[] , int StrLength);

int main() 
{
	char N[100];
	
	printf("Enter short text :");
	scanf("%99[^\n]",N);
	printf("lenght of the sentence : %d\n",stringLengh(N));
	printf("number of the word : %d\n",Numberofwords(N,stringLengh(N)));
        printf("number of vowels : %d\n",numofvowels(N,stringLengh(N)));
	
	return 0;
}

int stringLengh(char sentence[]){
	return strlen(sentence);}

int Numberofwords(char sentence[], int strLength){
	int word=0;
	char *token = strtok(sentence," ");
	while(token != NULL){
		word++;
		token = strtok (NULL, " ");
	}
	return word;
}	
int numofvowels(char sentence[] , int StrLength){
	int v=0;
	for (int i=0 ; i<StrLength ;i++){
		char ch = sentence[i];
		if(ch == 'i' || ch == 'e' || ch == 'a'|| ch == 'o' || ch =='u'){
			v++;}
	}
	return v;
}

