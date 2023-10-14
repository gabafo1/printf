#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: Nothing
 */
int _printf(const char *format, ...)
{
	va_list output;
	int prt_char = 0;

	if (*format == NULL)
		return (-1);
}
