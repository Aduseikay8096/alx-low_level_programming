#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */

/**
 * get_endianness - Gets the endianness of a machine
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	y = (char *)&x;
	return (*y + 48);
}
