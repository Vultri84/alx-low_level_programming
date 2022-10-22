#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: Sucess 1 otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
