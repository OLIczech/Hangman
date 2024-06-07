#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 20
#define MAX_MISSIMPUTS 26



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
	//random seed
	time_t t;
	srand((unsigned)time(&t));
	//variables
	const char* word = randomWord();
	int count = 0;
	char ch;
	int lives = 10;
	char wrongLetters[MAX_MISSIMPUTS] = { '\0' };
	//make empty array to dispaly te length of a guessed word
	for (int i = 0; word[i] != '\0'; i++)
	{
		count++;
	}
	
	char Guess[MAX_WORD_LENGTH] = { 0 };
	for (int i = 0; i < count; i++)
	{
		Guess[i] = '_';
	}
	Guess[count] = '\0';

	while (lives > 0)
	{
		
		if (lives <= 9)
		{
			asciiArt(lives);
		}
		printf("%s\n", Guess);
		printf("%s\n", word);
		printf("type lowercase character to guess, any other imput will cost you lives:\n");
		scanf(" %c", &ch);

		int found = 0;
		for (int i = 0; i < count; i++)
		{
			if (word[i] == ch)
			{
				Guess[i] = ch;
				found = 1;
			}
		}

		

		if (!found)
		{

			lives--;
		}

		

		system("cls");

	}

	printf("you lost! The correst word was: %s", word);
	
	return 0;
}