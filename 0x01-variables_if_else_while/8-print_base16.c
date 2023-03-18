#include <stdlib.h>
#include<stdio.h>
/**
 *main - Entry point
 *Description: 'lowercase'
 *Return: always 0
*/
int main(void)
{
	char l = 'z';
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
