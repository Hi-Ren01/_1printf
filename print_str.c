#include "main.h"

/**
 * print_str - function prints the number of string characters
 * @args: argument string
 * @buffer: pointer to the character
 * Return: output number of string characters
 */
int print_str(va_list args, char *buffer)
{
	int a;
	char *null;

	buffer = va_arg(args, char *);

	if (!buffer)
	{
		null = "(null)";
		return (_print_buf(null, 6));
	}

	for (; buffer[a] != '\0'; a++)
		;

	return (_print_buf(buffer, a));
}
