#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	else
		return (b);
}

int main(void)
{
	int i, n, j;

	printf("Enter a value: \n");
	scanf("%d", &n);
	for (i = (-n + 1); i < n; i++)
	{
		for (j = (-n + 1); j < n; j++)
		{
			printf("%d ", max(abs(i), abs(j)) + 1);
		}
		printf("\n");
	}
	return (0);
}
