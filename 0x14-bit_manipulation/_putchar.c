#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints the char c to stad output
 * @c: char to be printed
 * Description - a func that prints char c to stdout
 * Return: 1 on suceess, on erro = -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
