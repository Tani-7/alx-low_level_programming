#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase\n
 *
 * Return: 0 (success)
 *
*/

int main(void) /*main*/

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');


	return (0);
}
