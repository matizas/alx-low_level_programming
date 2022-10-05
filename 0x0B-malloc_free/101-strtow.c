#include "main.h"
#include <stdlib.h>
int numWords(char *);
void deallocateSpace(char **, int);

/**
 * numWords - counts the number of works in a string
 * @str: a pointer to the string
 * Return: number of words
 */

int numWords(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for  (; str[i] != ' ' && str[i] != '\0'; i++)
				str++;
			count++;
		}
	}
	return (count);
}

/**
 * deallocateSpace - frees the memory
 * @str: pointer string deallocated
 * @i: number of characters
 */

void deallocateSpace(char **str, int i)
{
	for (; i > 0;)
		free(str[--i]);
	free(str);
}

/**
 * strtow - to splits string into words
 * @str: string to split
 * Return: address if successfull else null
 */

char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = numWords(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' &&  b < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			words[b] = malloc((length + 1) * sizeof(char));
			if (words[b] == 0)
			{
				deallocateSpace(words, b);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[b][c] = *found_word;
				found_word++;
				c++;
			}
			words[b][c] = '\0';
			b++;
			c = 0;
			length = 0;
			str++;
		}
	}
	return (words);
}
