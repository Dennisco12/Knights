#include <stdio.h>
#include <stdlib.h>

int count_digits(int c)
{
        int i = 0, j;
	unsigned int n;

	if (c <= 0)
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

int main()
{
	int i, j, k;

	i = count_digits(4732);
	j = count_digits(345);
	k = count_digits(45);
	printf("%d, %d, %d\n", i, j, k);
	return (0);
}
