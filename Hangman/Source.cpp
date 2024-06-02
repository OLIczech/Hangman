#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>




int main()
{
	time_t t;
	srand((unsigned)time(&t));

	int randWord = rand() % (6);
	printf("%d ", randWord);

	return 0;
}