#include <stdio.h>

/**
 * main - this function prints the sizes of different data types
 * return: It returns a zero
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %lu byte(s)", (unsigned long)(sizeof(c));
	printf("Size of an int: %lu byte(s)", (unsigned long)(sizeof(i));
	printf("Size of a long int: %lu byte(s)", (unsigned long)(sizeof(li);
	printf("Size of a long long int: %lu byte(s)", (unsigned long)(sizeof(lli);
	printf("Size of a float: %lu byte(s)", (unsigned long)(sizeof(f);
	
	return (0);
}
