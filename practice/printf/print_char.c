#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int print_char(char c)
{
	putchar (c);
	return 1;
}

int main()
{
	char c = 'A';
	print_char(c);
	return(0);
}
