#include "main.h"

/**
 * print_chex - prints helper function for capital hexadecimal value
 * @args: the arguments type integer
 * @buffer: the pointer of a byte size
 * Return: the number of bytes printed by function
 */
int print_chex(va_list args, char *buffer)
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
		byte = ((a + 7) + '0');
	buffer[b] = byte, b++, sum_num %= digit_num;

	}
	return (_print_buf(buffer, b));
}
