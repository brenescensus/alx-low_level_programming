#include <stdlib.h>
#include<stdio.h>
/**
 *main - Entry point
 *Description: 'lowercase'
 *Return: always 0
*/
int main(void)
{
	int n = 0;
	int m = 1;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar('0' + n % 10);
			putchar('0' + m % 10);
			if (n == 8 && m == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
