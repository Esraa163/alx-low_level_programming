#include "main.h"

/**
 * _strlen_recursion - print the lenghth of string
 * @s: input string
 * Return: the length
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > '\0')
	{
		count +=  _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
