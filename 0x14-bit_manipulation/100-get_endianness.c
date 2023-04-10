#include "main.h"

/**
* get_endianness - determines d endian(little or big)of the machine it runs on
*
* Return: 0 if big, 1 if little
*/

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
