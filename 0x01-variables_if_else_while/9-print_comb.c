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

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n == 9)
		{
			continue;
		}
		putchar(',');
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
