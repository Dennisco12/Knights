#include <stdio.h>
#include <stdlib.h>
 
/**
 * main - print all the prime number less than 200
 * @i: input value
 * @j: input value
 * Return: always 0
 */

  int main() 
{
    int i, j, flag;

    printf("The prime numbers between 1 and 199 are:\n");
    for (i = 2; i < 199; i++)
    {
      flag = 1;
      for (j = 2; j <= i / 2 && flag == 1; j++)
      {
        if (i % j == 0) 
	{
          flag = 0;
        }
      }
      if (flag == 1)
      {
        printf("%5d ", i);
      }
    }
    printf("\n");
    return 0;
  }
