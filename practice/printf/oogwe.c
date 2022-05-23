#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * oogwe - works like putchar
 */

int oogwe(char c)
{
	static char dee[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &dee, 1);
		i = 0;
	}
	if (c != -1)
	{
		dee[i] = c;
		i++;
	}
	return(1);
}

// print integers
int print_int(int c)
{
	oogwe(c);
	return(1);
}

// return the number of digits passed through it
int count_digits(int c)
{
	int i, j;
	unsigned int n;

	if (c < 0)
		n = c * -1;
	else
		n = c;

	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// print a group of ints (positive or negative)
int print_num(int c)
{
	unsigned int i, j;

	if (c < 0)
	{
		oogwe(-);
		i = -c;
	}
	else
	{
		i = c;
	}
	while (i != 0)
	{
		oogwe(i);
		i = i / 10;
	}
	j = count_digits(c);
	return (j);
}

// print a char
int print_char(char c)
{
	oogwe(c);
	return (1);
}

//prints a string
int print_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		oogwe(str[i]);
		i++;
	}

	return (i);
}

//prints percent
int print_percent()
{
	oogwe ('%');
	return (1);
}

