#include "main.h"
/**
  *_isupper - check if the given character is an uppercase letter.
  *@c: Character to be tested
  *
  *Return: if uppercase return 1,else return 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
