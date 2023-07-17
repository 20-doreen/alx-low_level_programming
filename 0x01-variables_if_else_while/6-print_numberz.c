#include<stdio.h>
/**
 * main  -  prints numbers of base 10 starting from 0 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar((j % 10) + '0');
	}
	putchar('\n');
	return (0);
}
