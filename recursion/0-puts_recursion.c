#include "main.h"

void _puts(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		_putchar (s[j]);
		j++;
	}
	_putchar ('\n');
}
