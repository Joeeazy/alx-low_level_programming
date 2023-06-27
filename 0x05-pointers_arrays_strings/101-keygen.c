#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 *main - functionthat generates a password
 *Return: 0
 */
int main(void)
{
	int  myTotal = 0, genCharacters = 0;
	time_t seed;

	srand((unsigned int)time(&seed));

	while (myTotal < 2772)
	{
		int ranChar = rand() % 128;

		if ((myTotal + ranChar) > 2772)
			break;

		myTotal += ranChar;
		genCharacters++;
		printf("%c", ranChar);
	}
	printf("%c\n", (2772 - myTotal));

	return (0);
}
