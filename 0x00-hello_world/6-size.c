#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char a;
  int b;
  long c;
  long long d;
  float e;
  printf("Size of a char: %lu byte(s)\n",sizeof(a));
  printf('Size of an int: %lu byte(s)\n",sizeof(b));
  printf('Size of an long int: %lu byte(s)\n",sizeof(c));
  printf('Size of an long long int: %lu byte(s)\n",sizeof(d));
  printf('Size of an float: %lu byte(s)\n",sizeof(e));
 return (0);
}
