#include "main.h"

/**
 * _print_buf - programe writes a functions that writes a buffer
 * to standard output(Stdout)
 * @buf: buffer pointer
 * @n: number of bytes to be printed
 * Return: number of bytes printed
 */
int _print_buf(char *buf, int n)
{
	return (write(1, buf, n));
}
