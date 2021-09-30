#include "main.h"
/**
 * print_alphabet_x10 - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */


void print_alphabet_x10(void)
{
	int i;
	char ch;
	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar (ch);
		}

	_putchar('\n');
	}
}
