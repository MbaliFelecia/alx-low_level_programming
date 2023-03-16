#include "main.h"
#include <stdlib.h>

/* malloc - to allocate memory
 * amount of byte
 * *ptr - Poinetr to the allocated memory
 * if malloc fails - status value is equal to 98
 */
void *malloc_checked(unsigned int b);
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
