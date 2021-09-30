#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
	int x;
	char ch;

	for (x = 0; x <= 9; x++)
	putchar ((x % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
	putchar (ch);
	putchar('\n');
	return (0);
}
