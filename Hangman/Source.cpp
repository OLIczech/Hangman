#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>

//array lengths
#define MAX_WORD_LENGTH 20
#define MAX_MISSIMPUTS 26


//chose a random word for player to guess
const char* randomWord()
{
	int random = rand() % (11);

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
	case 6:
		return "gaurova";
	case 7:
		return "discord";
	case 8:
		return "kitten";
	case 9:
		return "ubuntu";
	case 10: 
		return "azure";
	}

}

//print a ascii art coresponding to a number of lives
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

	//make empty array to dispaly to length of a guessed word
	for (int i = 0; word[i] != '\0'; i++)
	{
		count++;
	}

	//fill the array with _ and end it with '\0'
	char Guess[MAX_WORD_LENGTH] = { 0 };
	for (int i = 0; i < count; i++)
	{
		Guess[i] = '_';
	}
	Guess[count] = '\0';

	//gameloop
	while (lives > 0)
	{
		//print the current state of hangman
		if (lives <= 9)
		{
			asciiArt(lives);
		}

		// print length of the word using underscores, print the wrong letters, print rules
		printf("%s\n", Guess);
		printf("there is no: %s\n", wrongLetters);
		printf("type lowercase character to guess, any other imput will cost you lives:\n");

		//scan the character which player wants to guess
		scanf(" %c", &ch);

		//if the character is in the word, replace the underscore in the word array with the letter
		int found = 0;
		for (int i = 0; i < count; i++)
		{
			if (word[i] == ch)
			{
				Guess[i] = ch;
				found = 1;
			}
			
		}

		//if not, lose a life and add wrong char into a wrong guesses array
		if (!found)
		{

			lives--;
			strncat(wrongLetters, &ch, 1);
		}

		//clear the console
		system("cls");

		//when the random word and guess array mach, print congratulations message
		if (strcmp(word, Guess) == 0)
		{
			printf("congratulations! you guessed the word correctly. The word was: %s", word);
			break;
		}
		if (lives == 0)
		{
			//game over message
			asciiArt(lives);
			printf("you lost! The correst word was: %s", word);
		}

	}
	
	
	return 0;
}
