#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(int *a, int n)
{
int i, h;
for (i = 0; i < (n / 2); i++)
{
h = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = h;
}
}	
