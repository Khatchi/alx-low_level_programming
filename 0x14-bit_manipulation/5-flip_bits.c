#include "main.h"
/**
 * flip_bits - a funct that counts d numb of bits to be changed
 * Description - writes a func dt counts d no of bits count after changes
 * @n: the numb being changed
 * @m: the numb gotten after n was changed
 * Return: returns numb of bit changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;
	int counts = 0;
	unsigned long int current_count;
	unsigned long int exclusive = n ^ m;

	for (k = 46; k >= 0; k--)
	{
		current_count = exclusive >> k;
		if (current_count & 1)
		{
			counts++;
		}
	}
	return (counts);
}
