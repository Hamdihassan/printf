#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - function that produces output according to a format
 * @format: a character string
 * write - write output to stdout
 * ...: variable number of parameters
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int tmp;
	char elem;
	char *str;

	va_list ptest;

	va_start(ptest, format);

		if (*format != '\0' && *format == '%')
		{
			++format;
			if (str == va_arg(ptest, char *))
			{
				_printf("%s\n");
				write(1, &str, 1);
			}
			else if (elem == va_arg(ptest, int))
			{
				_printf("%c\n");
				write(1, &elem, 1);
			}
			else
			{
				_printf("%/%");
				write(1, &tmp, 1);
			}
		}

	va_end(ptest);
	return (0);
}

