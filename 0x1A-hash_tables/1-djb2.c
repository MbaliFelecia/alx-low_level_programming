#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number 
 * through a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) ^ c; /* hash * 33 ^ c */
	}
	return hash;
}
