#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

typedef struct op
{
	char c;
	int (*f)(va_list, ...);
} op_t;

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag_t;

int oogwe(char c);
int print_int(int c);
int count_digits(int c);
int print_num(int c);
int print_char(char c);
int print_string(char *str);
int print_percent();
int (*get_op_func(char s))(va_list, op_t *);
int _printf(const char *format, ...);
int check_flag(char c, flag_t *f);

#endif
