#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
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


void asciiArt(int lives)
{
	switch (lives)
	{
	case 9:
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;
		case 8:
			printf(" _____________\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;
		case 7:
			printf(" _____________\n");
			printf("    | /\n");
			printf("    |/\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;
		case  6:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;
		case 5:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/        0\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;

		case 4:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/        0\n");
			printf("    |         |\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;

		case 3:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/        0\n");
			printf("    |        /|\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;

		case 2:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/        0\n");
			printf("    |        /|\\\n");
			printf("    |\n");
			printf("    |\n");
			printf("    |\n");
			break;

		case 1:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/        0\n");
			printf("    |        /|\\\n");
			printf("    |        /\n");
			printf("    |\n");
			printf("    |\n");
			break;

		case 0:
			printf(" _____________\n");
			printf("    | /       |\n");
			printf("    |/        0\n");
			printf("    |        /|\\\n");
			printf("    |        / \\\n");
			printf("    |\n");
			printf("    |\n");
			break;

	}
}



int main()
{
	
	
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < 26; i++)
	{
		printf("%s \n", randomWord());
		asciiArt(i);
	}

	return 0;
}