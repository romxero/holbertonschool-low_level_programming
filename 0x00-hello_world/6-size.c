#include <stdio.h>
/*
* prints size of various types on the computer it is compiled and run on
*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char is: %lu.\n", sizeof(c));
	printf("The size of an int is: %lu.\n", sizeof(i));
	printf("The size of a long int is: %lu.\n", sizeof(li));
	printf("The size of a long long int is: %lu.\n", sizeof(lli));
	printf("The size of a float is: %lu.\n", sizeof(f));

	return (0);
}
