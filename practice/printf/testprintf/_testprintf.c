#include "main.h"

/**
 * _printf - works almost like printf
 * return: number of char printed
 */

int _printf(const char *format, ...)
{
	int count;
	va_list elem;

	va_start(elem, format);

	count = 0;
	while (format[count])
	{
		if (format[count] == '%')
		{
			count++;

			if (format[count] == '%')
			{
				oogwe ('%');
				break;
			}
			else
			{
				switch (format[count])
				case 'd':
				{
					print_int(va_arg(elem, int));
					break;
				}
				case 's':
				{
					print_string(va_arg(elem, char *));
					break;
				}
				case 'i':
				{
					print_num(va_arg(elem, int));
					break;
				}
				case 'c':
				{
					print_char(va_arg(elem, int));
					break;
				}
			}
