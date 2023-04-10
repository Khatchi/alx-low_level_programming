#include "main.h"

/**
* flip_bits - it flips the bit in n different from m
* @n: initial number
* @m: final number
* Description - a func. that flips bit in n diff from m and returns no of bit
* Return: the number of bits to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;
	int count = 0;

	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 46; k >= 0; k--)
	{
		current = exclusive >> k;

		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
