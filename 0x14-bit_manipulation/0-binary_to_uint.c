#include "main.h"

/** a function that changes binary to unsigned int
 * b  is a pointer to a string
 * returns the converted number
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un;

	int stg, base_two;

	if (!b)
		return (0);

	un = 0;

	for (stg = 0; b[stg] != '\0'; stg++)
		;

	for (stg--, base_two = 1; stg >= 0; stg--, base_two *= 2)
	{
		if (b[stg] != '0' && b[str] != '1')
		{
			return (0);
		}

		if (b[stg] & 1)
		{
			un += base_two;
		}
	}

	return (un);

}
