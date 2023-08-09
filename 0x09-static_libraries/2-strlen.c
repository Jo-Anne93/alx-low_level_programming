#include "main.h"

/**
  *_strlen - return the length of the string as an int value
  *@s: the string to measure.
  *
  *Return: Int value of the length.
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
