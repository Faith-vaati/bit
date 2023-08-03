#include "bit.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int ln, bt;

	if (!b)
		return (0);

	i = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, bt = 1; ln >= 0; ln--, bt *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			i += bt;
		}
	}

	return (i);
}
