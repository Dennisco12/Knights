#include <stdio.h>

/**
 * main - entry point
 * @a: first value
 * @b: second value
 * @c: third value
 * Return: always 0
 */

int main(void)
{
	int a, b, c;

	printf("Input first value: ");
	scanf("%d", &a);
	while (a > 100 || b < 0)
	{
		printf("Error, number should be in the range of 1 to 100\n");
		printf("Enter first value again: ");
		scanf("%d", &a);
	}

	printf("Input second value: ");
	scanf("%d", &b);
	while (b > 100 || b < 0)
	{
		printf("Error, number should be in the range of 1 to 100\n");
		printf("Enter second value again: ");
		scanf("%d", &b);
	}

	printf("Input third value: ");
	scanf("%d", &c);
	while (c > 100 || c < 0)
	{
		printf("Error, number should be in the range of 1 to 100\n");
		printf("Enter third value again: ");
		scanf("%d", &c);
	}

	if (a > b && b > c)
	{
		printf("%d > %d > %d\n", a, b, c);
	}
	else if (a > b && c > b)
	{
		if (a > c)
		{
			printf("%d > %d > %d\n", a, c, b);
		}
		else if (c > a)
		{
			printf("%d > %d > %d\n", c, a, b);
		}
		else
		{
			printf("%d = %d > %d\n", c, a, b);
		}
	}
	else if (b > a && a > c)
	{
		printf("%d > %d > %d\n", b, a, c);
	}
	else if (b > a && c > a)
	{
		if (b > c)
		{
			printf("%d > %d > %d\n", b, c, a);
		}
		else if (c > b)
		{
			printf("%d > %d > %d\n", c, b, a);
		}
		else
		{
			printf("%d = %d > %d\n", b, c, a);
		}
	}

	else if (c > a && a > b)
	{
		printf("%d > %d > %d\n", c, a, b);
	}
	else if (c > a && b > a)
	{
		if (c > b)
		{
			printf("%d > %d > %d\n", c, b, a);
		}
		else if (b > c)
		{
			printf("%d > %d > %d\n", b, c, a);
		}
		else
		{
			printf("%d = %d > %d\n", b, c, a);
		}
	}
	else
	{
		printf("calculating");
	}
	printf("\n");
}
