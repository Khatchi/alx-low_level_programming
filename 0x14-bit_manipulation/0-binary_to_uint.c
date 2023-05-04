#include "main.h"
/**
 * binary_to_uint - this changes a bin no to unsigned int
 * Description - a func that converts a bin to unsigned int
 * @b: pointer to the string containing the bin numb
 * Return: returns the converted no i.e unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_val = 10;

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
