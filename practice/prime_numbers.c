#include <stdio.h>
#include <stdlib.h>
 
/**
 * main - print all the prime numbers less than 200
 * @i: integers between 2 and 200
 * @j: division factor
 * Return: always 0
 */

int main()
{
    int i, j, flag;

    printf("The prime numbers between 1 and 200 are:\n");
    for (i = 2; i < 200; i++)
    {
	    for (j = 2; j < (i + 1 / 2); j++)
	    {
		    if (i % j != 0)
		    {
			    flag = 1;
		    }
		    else
		    {
			    flag = 0;
		    }
	    }
	    if (flag == 1)
	    {
		    printf("%d ", i);
	    }
    }
    printf("\n");
    return 0;
}
