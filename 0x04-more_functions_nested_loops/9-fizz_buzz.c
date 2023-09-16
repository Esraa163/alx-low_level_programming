#include "main.h"

/**
 * main - entry point
 *
 * Description: function print the number
 *		1 to 100 but if div by 3
 *		will print Fizz if div by 5
 *		will print Buzz
 *
 * Return: return (0) (succsses)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (num % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		printf("%d ", num);
	}
	return (0);
}
