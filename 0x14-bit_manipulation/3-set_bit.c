#include "main.h"
/**
 * set_bit - a funct tht sets bit at a specified index
 * Description - writes a func which sets bit a given index value
 * @n: a pointer to the unsigned long int  numb to change
 * @index: the index value of the bit to be set
 * Return: retuurns 1 on success, and -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 46)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
