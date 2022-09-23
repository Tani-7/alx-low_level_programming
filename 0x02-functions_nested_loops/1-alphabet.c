#include "main.h"

/**
 * main - print_alphabet - entry point
 *
 * Description: Make alphabet 10 times
 *
 * Return: void
*/

void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
