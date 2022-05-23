#include <stdio.h>
#include <stdlib.h>

int largest_prime_factor(int n)
{
        int i, j, count = 0;

	for (i = n - 1; i > 1; i--)
	{
		if (n % i == 0)
		{
			//only factors are left at this point (10, 5, 4, 2).

			for (j = i + 1 / 2; j > 2; j--)
			{
				if (i % j == 0)
				{
					count += 1;
					continue;
					printf("%d\n", i);
				}
				else
				{
					count = 0;
					continue;
				}

				if (count == 0)
				{
					printf("%d\n", i);
					break;
				}
		//non prime factors will have counts greater than 0 after this.

			}
		}
	}
        return (0);
}

int main(void)
{
	largest_prime_factor(20);
	return (0);
}
