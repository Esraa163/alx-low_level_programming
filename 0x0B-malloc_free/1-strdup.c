#include "main.h"

/**
 * *_strdup - function that make copy to string
 * @str: string thatwill make it copy
 * Return: coped string
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	for (; str[size] != '\0' ; size++)
	;
	
	m = malloc(size *sizeof(*str) + 1);

		if (m == 0)
			return (NULL);
		else 
		{
			for (; i < size; i++)
				m[i] = str[i];
		}
		return (m);
}
