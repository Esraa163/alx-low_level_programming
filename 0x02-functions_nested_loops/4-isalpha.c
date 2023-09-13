#include "main.h"

/**
 * _isalpha - function to print all alphabets as lowercase or uppercase
 *
 * @c: takes input from other function
 *
 * Return: the function return (1) for any alphabet and return 0 in otherwise
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
