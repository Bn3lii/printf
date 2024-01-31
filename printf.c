#include <stdarg.h>
#include "main.h"
/**
 * _printf - Print formatted output to stdout
 * @format: Format str
 *
 * Return: Num of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	const char *ptr = format;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			switch (*(++ptr))
			{
				case 'c':
					handle_c(args, &len);
					break;
				case 's':
					string(args, &len);
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					handle_decimal(args, &len);
					break;
				case 'u':
					handle_unsigned(args, &len);
					break;
				case 'o':
					handle_octal(args, &len);
					break;
				case 'x':
					handle_hex(args, &len);
					break;
				case 'X':
					handle_hex_upper(args, &len);
					break;
				default:
					len += _putchar('%');
					len += _putchar(*ptr);
					break;
			}
		}
		else
		{
			len += _putchar(*ptr);
		}
		ptr++;
	}

	va_end(args);
	return (len);
}
