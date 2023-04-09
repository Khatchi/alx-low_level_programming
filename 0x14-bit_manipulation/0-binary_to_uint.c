#include "main.h"

/**
* binary_to_uint - converts a base 2 no to unsigned int
* @b: a pointer to a char arry rep. a binary number
* Description - a function that cnvrts a base 2 no to an unsigned int
* Return: the number being converted or 0 if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_val = 0;

	if (!b)
	{
		return (0);
	}
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
		{
			return (0);
		}
		dec_val = 2 * dec_val + (b[k] - '0');
	}
	return (dec_val);
}
