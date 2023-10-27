#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a character at a time
 * @c: character to be printed
 *
 * Return: 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
