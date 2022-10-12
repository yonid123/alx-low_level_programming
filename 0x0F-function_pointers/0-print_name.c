#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
  if (!name || !f)
    return;
  f(name);
}
