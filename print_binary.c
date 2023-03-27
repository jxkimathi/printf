#include "main.h"

/**
 * print_binary - Prints a number in base 2
 * @list: numbers to be printed in base 2
 *
 * Return: the length of numbers in binary
 */

int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(ist, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
