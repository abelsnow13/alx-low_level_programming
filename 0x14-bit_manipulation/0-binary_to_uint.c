#include "main.h"

/**
 *binary_to_unit -  converts a binary number to an unsigned int
 *where b is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0 if one or more chars in the string b that is not 0 or 1 and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		dec <<= 1;
		if (*(b + n) == '1')
			dec ^= 1;
		n++;
	}
	return (dec);
}
