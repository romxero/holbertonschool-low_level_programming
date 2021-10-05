#include "main.h"
/**
 * more_numbers - this is what the main function does
 * @a: variable
 * Return: this is what's supposed to be returned to main
 */

void more_numbers(void)


{

	char a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a);
	}

		if (a >= 10 && a <= 14);
			{
			 _putchar(a % 10);
			}



	_putchar('\n');
}
