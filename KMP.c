#include <stdio.h>
#include <string.h>

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