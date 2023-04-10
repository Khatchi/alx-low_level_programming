#include "main.h"

/**
* get_bit - returns the value of the bi at the specified index
* @n: unsigned int for numb. to search
* @index:the bit's index
* Description - a func. that returns value of bit at given index
* Return: the value of bit at index or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 46)
	{
		return (-1);
	}
	bit_value = (n >> index) & 1;
	return (bit_value);
}
