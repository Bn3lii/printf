#include <stdarg.h>
#include "main.h"

/**
 * handle_char - Handles the %c format specifier
 * @args: va_list argument containing the character to print
 * @len: Pointer to the length counter
 *
 * Return: updated length counter
 */
int handle_c(va_list args, int *len)
{
	int c = va_arg(args, int);

	*len += _putchar(c);
	return (*len);
}
