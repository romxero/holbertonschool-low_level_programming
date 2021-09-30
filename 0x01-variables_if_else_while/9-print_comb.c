#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	putchar (x);

		if (x < '9')
		{
		putchar (',');
		putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
