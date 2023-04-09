#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to flip bits in
 * @m: number to flip bits to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < sizeof(n) * 8; i++)
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	return (count);
}
