#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - to allocate memory to the array
 * @nmemb: number of elements in the array
 * @size: the size of each element of the array
 * Return: address for the memory allocated to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arrNum;
	unsigned int row;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrNum = malloc(nmemb * size);
	if (arrNum == NULL)
		return (NULL);

	for (row = 0; row < (nmemb * size); row++)
		arrNum[row] = 0;

	return (arrNum);
}
