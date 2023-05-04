#include "main.h"
/**
 * get_endianness - a func that checks if the machine is a big or little endian
 * Description - writes a func dt checks the endian of a machine
 * Return: returns 0 for big endian and 1 foe little endian
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
