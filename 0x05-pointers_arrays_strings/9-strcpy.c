#include "main.h"

/**
 * *_strcpy - thatmake copy the string
 *
 * @dest: the input that will print inside
 *
 * @src: the input that want to be printed
 *
 * Return: will return the string that copied
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
