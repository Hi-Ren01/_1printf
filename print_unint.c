#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_unint - function that prints the unsigned integer number
 * @args: the arguments type integer
 * @buffer: the pointer of a byte size
 * Return: the number of bytes printed by function
 */
int print_unint(va_list args, char *buffer)
{
	unsigned int num:
	unsigned int sum_num, a, digit_num = 1, b = 0;
	char bytes;

	num = va_arg(args, unsigned int);

	sum_num = num;

	a = sum_num;

	while (a > 9)
	{
		a /= 10;
		digit_num *= 10;
	}
	for (; digit_num > 0; digit_num /= 10)
	{
		bytes = ((sum_num / digit_num) + 48);
		buffer[b] = bytes, b++, sum_num %= digit_num;
	}
	return (_print_buf(buffer, b));
}
