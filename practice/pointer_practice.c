#include <stdio.h>

/**
 * main - entry point
 * description: to get the address of a variable
 * Return: always 0
 */

int main(void)
{
	char c;

	printf("Address of the variable 'c': %p\n", &c);
	return (0);
}
