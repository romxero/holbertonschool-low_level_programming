#include <stdio.h>
/*
*Main - prints size of various types on the computer it is compiled and run on
*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char is: %lu byte(s)\n", sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int is: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float is: %lu byte(s)\n", sizeof(f));

	return (0);
}
