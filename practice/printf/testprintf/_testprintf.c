#include "main.h"

/**
 * _printf - works almost like printf
 * return: number of char printed
 */

int _printf(const char format, ...)
{
	int count;
	va_list elem;

	va_start
