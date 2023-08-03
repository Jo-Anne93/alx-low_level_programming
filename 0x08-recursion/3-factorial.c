#include "main"

/**
  *factorial - returns the factorial of a numbser
  *@n: number to return the factorial from
  *
  *Return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
  
