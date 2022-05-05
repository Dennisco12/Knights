#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int add(int a, int b)
{
	int n;

	n = a + b;

	if (n > 9)
	{
		putchar ((n / 10) + '0');
		putchar ((n % 10) + '0');
	}
	else
	{
		putchar (n + '0');
	}
	return (0);
}
