#include "main.h"
/**
 * print_binary - a func that prints base2 equi. of a dec numb
 * Description - prints base 2 equivalent of decimal number
 * @n: the numb to be printed in base 2
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int current_val;

	for (k = 63; k >= 0; k--)
	{
		current_val = n >> k;

		if (current_val & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
