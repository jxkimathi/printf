#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @str: the string to be calculated
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0, str[i] != 0; i++)
		;

	return (1);
}

/**
 * print - prints a char
 * @str: string
 *
 * Return: the string length
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(sstr[i]);

	return (i);
}
