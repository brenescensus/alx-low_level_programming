#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: 'get the last digit of a number'
 *Return: always 0
 */
int main(void)
{
	int n;
	int lv;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lv = n % 10;
	if (lv > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lv);
	}
	else if (lv == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lv);
	}
	else if (lv < 5	&&	lv != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lv);
	}
	return (0);
}
