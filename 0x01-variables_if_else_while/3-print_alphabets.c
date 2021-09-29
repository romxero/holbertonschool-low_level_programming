#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar (ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar (ch);
	putchar('\n');

	return (0);
}
