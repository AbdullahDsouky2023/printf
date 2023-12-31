#include "main.h"

/**
 * _puts1 - prints a string with newline
 * @str: the string to print
 *
 * Return: void
 */
int _puts1(char *str)
{
	char *a = str;

	while (*str)
		_putchar2(*str++);
	return (str - a);
}

/**
 * _putchar2 - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar2(int s)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (s == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (s != BUF_FLUSH)
		buf[i++] = s;
	return (1);
}
