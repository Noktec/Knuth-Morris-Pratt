#ifndef KMP_H
#define KMP_H

#include <stdio.h>
#include <string.h>

/*Failure Function */
void failureFunction(char *word, int m, int kmpNext[]);

/* Search Function */
void searchKMP(char *word, int m, char *myString, int n);

#endif

