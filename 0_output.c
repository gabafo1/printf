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
	char *str;
	int strg_ln;
	int strg_ln = 0;

	if (*format == NULL)
		return (-1);
	va_start(output, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			prt_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				prt_char++;
			}
			else if (*format == 's')
			{
				str = va_arg(output, char*);
				while (str[strg_ln] != '\0')
					strg_len++;
				write(1, str, strg_ln);
				output = output + strg_ln;
			}
		}
		format++;
	}
	va_end(output);
	return (prt_char);
}
