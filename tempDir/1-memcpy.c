#include "main.h"

/**
 * *_memcpy - copies memory area from one source to the other
 *
 * @dest: first ref parameter
 * @src: second ref parameter
 * @n: value parameter, number of bytes
 * Return: address the destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
