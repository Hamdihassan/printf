#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string
 * write - write out put to stdout
 * ...: variable number of argument
 *
 * Return: always 0
 */
int _printf(const char *format, ...)
{
	int n = 0;
	int x;

	va_list test;

	va_start(test, format);

	if (*format != '\0' && *format == '%')
	{
		++format;

		if (n == va_arg(test, int))
		{
			_printf("%i\n");
			write(1, &n, 1);
		}
		else
		{
			_printf("%d\n");
			write(1, &x, 1);
		}
	}
		va_end(test);
		return (0);
}
