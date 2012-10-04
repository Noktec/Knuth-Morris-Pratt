//This code is an implementation of
//the Knuth-Morris-Pratt fast searching algorithm. 

#include <stdio.h>
#include <string.h>

//The failure function receives the strings to search 'x' of length m.
//The table received has the size of length m. 
//Example of the failure function
//abcdbabce
//000001230


void failureFunction( char *word, int m, int kmpNext[]){
	int i=0;
	int j=-1;
	kmpNext[0]=-1;

	for(i=0; i < m; i++){
	
		
	while(j > -1 && word[i]!=word[j]){

		j=kmpNext[j];
		
		

	}
	j++; 
	if(word[i] == word[j]){
			kmpNext[i] = kmpNext[j];
			
	}
	else{
		kmpNext[i]=j;  
	}

	}

	for(i=0; i<m; i++){
		printf("%d\n", kmpNext[i]);
	}
	
}

void searchKMP(char *word, int m, char *myString, int n){
	
	int i,j;
	int kmpNext[m+1];
	

	//call to the failure function
	failureFunction(word,m,kmpNext);
	
	j=0;
	for(i=0; i<n; ++i){
		while(-1 < j &&word[j] != myString[i]){
			j=kmpNext[j];
		}
		++j;
		if(m <= j){
			printf("Found at %d \n",i-j+1);
			j = kmpNext[j];

		}
	}




}

int main(int argc, char **argv){


	char* myString="hehehello, This is a long string where the word hehehello appears at least twice. ";
	
	char* word="hehehello";

	int n = strlen(myString);

	int m = strlen(word);

	printf("KMP: \n");
	searchKMP(word,m,myString,n);
	


	return 0;
}

