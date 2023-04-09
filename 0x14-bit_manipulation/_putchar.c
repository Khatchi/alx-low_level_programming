#include <unistd.h>
#include "main.h"

/**
* _putchar - inputs the char c to std output
* @c: The char to be outputed
* Description - function that writes a char to std output
* Return: Success 1, otherwise error set accordingly
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
