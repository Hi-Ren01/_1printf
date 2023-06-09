#include "main.h"

/**
 * pnt_upp_hex - prints unsigned integer number
 * upper  hexadecimal value
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 * Return: number of bytes printed
 */

int pnt_upp_hex(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int pos_num, b, digit_num = 1, i = 0;
	char lett;

	num = va_arg(args, unsigned int);

	pos_num = num;

	buffer[i] = '0', i++;

	if (num == 0)
		return (_print_buf(buffer, i));
	buffer[i] = 'x', i++;

	c = pos_num;

	while (c > 15)
	{
		c /= 16;
		digit_num *= 16;
	}
	for (; digit_num > 0; digit_num /= 16)
	{
		c = (pos_num / digit_num);

		lett = (c + '0');

		if (c > 9)
			lett = ((c + 7) + '0');
		buffer[i] = lett, i++, pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}
