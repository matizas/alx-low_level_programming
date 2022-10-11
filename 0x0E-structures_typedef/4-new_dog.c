#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to string, name or owner
 * Return: length of a string
 */

int _strlen(char *s)
{
	int num;

	if (*s != '\0')
	{
		num = 0;
		while (s[num] != '\0')
			num++;
	}
	return (num);
}

/**
 * _strcpy - copies the string and append to the existing string
 * @dest: pointer to dest string
 * @src: pointer to string source string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog
* @name: first member
* @age: second member
* @owner: third member
* Return: pointer to new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	return (new_dog);
}
