#include <stdio.h>

/**
 *main -Entry point 
 *Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: \xu byte(s)\n", sizeof(char));
	printf("Size of an int: \xu byte(s)\n", sizeof(int));
	printf("Size of a long int: \xu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: \xu byte(s)\n", sizeof(long long int));
	ptintf("Size of a float: \xu byte(s)\n", sizeof(float));
	return (0);
}	
