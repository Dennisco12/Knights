#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
        return (0);
}

int main(void)
{
	int n;

	positive_or_negative(98);
	return (0);
}
