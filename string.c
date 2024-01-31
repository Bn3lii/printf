#include <stdarg.h>
#include "main.h"

/**
 * handle_string - Handles the %s format
 * @args: va_list argument containing the string to print
 * @len: Pointer to length counter
 *
 * Return: updated lenth counter
 */
int string(va_list args, int *len)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		*len += _putchar(*str++);
	}
	return (*len);
}
