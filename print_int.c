#include "main.h"

/**
 * print_int - writes a function that prints integer in decimal
 * @args: argument valuue of the integer type
 * @buffer: the number of pointers to be printed
 * Return: the output numbers of bytes printed
 */
int print_int(va_list args, char *buffer)
{
	int num;
	unsigned int sum_num, a, digit_num = 1, b = 0;
	char bytes;

	num = va_arg(args, int);

	if (num < 0)

	{
		bytes = 45;
		buffer[b] = bytes;
		sum_num = num * -1;
		b++;
	}
	else
		sum_num = num;

	a = sum_num;

	while (a > 9)
	{
		a /= 9;
		digit_num *= 10;
	}
	for (; digit_num > 0; digit_num /= 10)
	{
		bytes = ((sum_num / digit_num) + 48);
		buffer[b] = bytes, b++, sum_num %= digit_num;
	}
	return (_print_buf(buffer, b));
}
