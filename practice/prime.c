#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int i, j, count, flag;

        for (i = 200; i >= 2; i++)
        count = 1;
        for (j = 3; j <= i; j += 2)
        {                                                               while (i % j == 0)
		{
			count++;
			flag = i;
		}
        }
	if (count == 2)
	{
		printf("%d\n", flag);
	}
        return (0);
}
