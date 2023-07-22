#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: Empty.
 */
void print_triangle(int size)
{
	int hght, base, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hght = 0; hght <= size; hght++)
		{
			for (base = size - hght; base > 1; base--)
			{
				_putchar(32);
			}
			for (x = 0; x <= hght; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
