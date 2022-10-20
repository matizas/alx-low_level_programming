#include "main.h"
int _strlen_recursion(char *);
int str_compare(int, int, char *);

/**
 * is_palindrome - determine if word is a palindrome
 * @s: ref parameter to store address of a string
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	return (str_compare(0, _strlen_recursion(s) - 1, s));
}


/**
 * str_compare - check if string reads the same forward and backward
 * @t: counting from the left. must be incremented by 1
 * @h: counting from the right. must be decremented by 1
 * @ptr: ref parameter to store the address of a string
 * Return: 1 if string reads the same else 0
 */

int str_compare(int t, int h, char *ptr)
{
	if (t >= h)
		return (1);
	if (ptr[t] != ptr[h])
		return (0);
	else
		return (str_compare(t + 1, h - 1, ptr));
}

/**
 * _strlen_recursion - to return the length of a string
 * @s: ref parameter to store the address of a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
