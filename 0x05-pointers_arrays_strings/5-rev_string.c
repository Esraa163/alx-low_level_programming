#include "main.h"

/**
 * rev_string - print the string reversed
 *
 * @s: the input string
*/

void rev_string(char *s)
{
	int i = 0, k;
	char temp;

	while (s[i] != '\0')
		i++;

	for (k = 0; k < i / 2; k++)
	{
		temp = s[k];
		s[k] = s[i - 1 - k];
		s[i - 1 - k] = temp;
	}
}
