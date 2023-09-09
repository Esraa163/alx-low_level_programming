/**
 * main - Entry point
 *
 * Descreption: print three numbers without rep
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, k, f;

	for (i = 0; i <= 7; i++)
	{
		for (k = 1; k <= 8; k++)
		{
			for (f = 2; f <= 9; f++)
			{
				if (i != k && k != f && i < k && k < f)
				{
					putchar(i + 48);
					putchar(k + 48);
					putchar(f + 48);
					if (i + k + f != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
