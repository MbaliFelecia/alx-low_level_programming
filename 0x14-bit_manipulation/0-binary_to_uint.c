#include "main.h"

/**
 * binary_to_uint - convert a binary number to
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int j, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (j = 0; b[j] != '\0'; j++)
		;

	for (j--, base_two = 1; j >= 0; j--, base_two *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}

		if (b[j] & 1)
		{
			ui += base_two;
		}
	}

		return (ui);
}
