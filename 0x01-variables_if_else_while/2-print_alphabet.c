#include <stdlib.h>
#include<stdio.h>
/**
 *main - Entry point
 *Description: 'lowercase'
 *Return: always 0
*/
int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');
	return (0);
}
