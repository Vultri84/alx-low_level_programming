#include "main.h"

/**
 * _strncpy - copys a string with n
 * @dest: copy to
 * @src: copy from
 * @n: num of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x:

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
