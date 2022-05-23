#include "main.h"

/**
 * get_op_func - checks the flag specifier and calls the
 * appropiate function
 */

int (*get_op_func(char s))(va_list, op_t *)
{
	int i;

	op_t func[] = {
		{d, print_int},
		{i, print_int},
		{c, print_char},
		{%, print_percent},
		{s, print_string},
		{NULL, NULL}
	};

	i = 0;
	while (func[i].c)
	{
		if (strcmp(s, func[i].c) == 0)
		{
			return (func[i].f);
		}
		i++;
	}

	return (NULL);
}
