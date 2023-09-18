#include "main.h"

/**
 * _strlen - function that count
 *		the number of string length
 *
 * @s: the string input
 *
 * Return: the value of length of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
