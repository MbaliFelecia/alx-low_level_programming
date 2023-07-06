#include "main.h"

/** a function that changes binary to unsigned int
 * b  is a pointer to a string
 * returns the converted number
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un;

	int str, base_two;

	if (!b)
		return (0);

	un = 0;

	for (str = 0; b[str] != '\0'; str++)
		;

	for (str--, base_two = 1; str >= 0; str--, base_two *= 2)
	{
		if (b[str] != '0' && b[str] != '1')
		{
			return (0);
		}

		if (b[str] & 1)
		{
			un += base_two;
		}
	}

	return (un);

}
