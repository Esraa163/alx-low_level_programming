#include "main.h"

/**
 * _islower - function to check if character is lowercase or not
 * @c: check input of function
 *
 * Return: return 1 if 'c' and return 0 if otherwise (success)
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
