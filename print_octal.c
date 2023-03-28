#include "main.h"

/**
 * print_octal - function prints the unsigned integer usimg octal base
 * @args: argument valuue of the integer type
 * @buffer: the number of pointers to be printed
 * Return: the output numbers of char printed
 */
int print_octal(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int sum_num, a, digit_num = 1, b = 0;
	char bytes;

	num = va_arg(args, unsigned int);

	sum_num = num;

	a = sum_num;

	while (a > 7)
	{
		a /= 8;
		digit_num *= 8;
	}
	for (; digit_num > 0; digit_num /= 8)
	{
		bytes = ((sum_num / digit_num) + 48);
		buffer[b] = bytes, b++, sum_num %= digit_num;
	}
	return (_print_buf(buffer, b));
}
