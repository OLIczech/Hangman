#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int lives = 10;

const char* randomWord()
{
	int random = rand() % (6);

	switch (random)
	{
	case 0:
		return "folbr";
	case 1:
		return "software";
	case 2:
		return "programovani";
	case 3:
		return "javascript";
	case 4:
		return "uzlabina";
	case 5:
		return "hardware";
	}

}

int main()
{

	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < 26; i++)
	{
		printf("%s \n", randomWord());
	}
		
	
	
	

	return 0;
}