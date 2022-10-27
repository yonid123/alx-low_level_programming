#include <stdio.h>
#include <main.h>
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * -> there is one or more chars in the string b that is not 0 or 1
 * -> b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int rem, weight;

	if (b == NULL)
		return (0);
	
		 while (*b != 0){
            rem = b%10;
           value= value + rem*weight;
            binary = b/10;
           weight = weight*2;
		 }
	return (value);
}
