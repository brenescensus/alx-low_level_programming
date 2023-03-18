#include <stdlib.h>
#include<stdio.h>
/**
 *main - Entry point
 *Description: 'lowercase'
 *Return: always 0
*/
int  main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
