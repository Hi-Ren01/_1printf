#include "main.h"

/**
 * print_shex - writes a function that prints an unsigned number in
 * lower hexadecimal value
 * @args: argument valuue of the integer type
 * @buffer: the number of pointers to be printed
 * Return: the output numbers of char printed
 */
int print_shex(va_list args, char *buffer)
{
	unsigned int num:
	unsigned int sum_num, a, digit_num = 1, b = 0;
	char bytes;

	num = va_arg(args, unsigned int);

	sum_num = num;

	a = sum_num;

	while (a > 15)
	{
		a /= 16;
		digit_num *= 16;
	}
	for (; digit_num > 0; digit_num /= 16)
	{
		a = (sum_num / digit_num);

		bytes = (a + '0');

		if (a > 9)
			bytes = ((a + 39) + '0');
		buffer[b] = bytes, b++, sum_num %= digit_num;
	}
	return (_print_buf(buffer, b));
}
