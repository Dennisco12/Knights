#include "main.h"

/**
 * _printf - works almost exactly like printf
 */

int _printf(const char *format, ...)
{
	const char *ptr;
	va_list elem;
	int (*ap_func)(va_list elem, op_t *);
	int count = 0;

	va_start(elem, format);

	ptr = format;
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			ap_func = get_op_func(*ptr);
			count++;

			ap_func(elem);
		}
		else
		{
			oogwe(*ptr);
			count++;
		}
		ptr++;
	}
	va_end(elem);
	return(count);
}

int main()                                                 {
        int age = 10;

        _printf("I am a boy\n");
        _printf("I am %d years old", age);
        _printf("I can add, 17 and 5");

        return(0);
}
