#include "main.h"
/**
 * print_alphabet - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */


void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
