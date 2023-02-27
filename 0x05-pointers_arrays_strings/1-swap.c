#include "main.h"
/**
  * swap_int - swaps the value of int a and int b
  *
  * @a: first input parameter
  * @b: second input parameter
  * Return 0
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
