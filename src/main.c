#include "KMP.h"

int main(int argc, char **argv){

	char* myString="hehehello, This is a long string where the word hehehello appears at least twice. ";
	
	char* word="hehehello";

	int n = strlen(myString);

	int m = strlen(word);

	printf("KMP: \n");
	searchKMP(word,m,myString,n);
	
	return 0;
}