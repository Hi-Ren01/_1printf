#include "main.h"

/**
 * pnt_plus_int - prints signed integer number
 * with their sign
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 * Return: number of bytes printed
 */

int pnt_plus_int(va_list args, char *buffer)
{
	int num;
	unsigned int pos_num, c, digit_num = 1, i = 0;
	char lett;

	num = va_arg(args, int);

	if (num < 0)
	{
		lett = 45;
		buffer[i] = lett;
		pos_num = num * -1;
		i++;
	}
	else
	{
		lett = '+';
		buffer[i] = lett;
		pos_num = num;
		i++;
	}

	c = pos_num;

	while (c > 9)
	{
		c /= 10;
		digit_num *= 10;
	}
	for (; digit_num > 0; digit_num /= 10)
	{
		lett = ((pos_num / digit_num) + 48);
		buffer[i] = lett, i++, pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}
