#include "main.h"

/**
 * *_strcat - pointer that will make
 *
 *@src: pointer input that taken
 *@dest: pointer input that will be returned
 *
 * Return: the dest value
*/

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1] != '\0')
	{
		c1++;
	}
	c2 = 0;
	while (src[c2] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	return (dest);
}
