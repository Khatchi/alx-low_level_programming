#include "main.h"

/**
* print_binary - prints binary representation of iputed value
* @n: decimal value to be converted its binary representation
* Description - a funstion that prints binary rep. of a no
*/

void print_binary(unsigned long int n)
{
	int k; 
	int count = 0;
	unsigned long int current;

	for (k = 46; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
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
