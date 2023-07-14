#include<stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 * Returns: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1 + 1; j < 10; j++)
		{
			putchar ('0' + i);
			putchar ('0' + j);

if (i < 8)
{
	putchar(',');
	putchar(' ');
}
		}
	}
putchar('\n');
return (0);
}
