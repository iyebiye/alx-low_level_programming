#include "main.h"
#include <stddef.h>

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i;
	char *start, *end, aux;

	start = s;
	end = s;

	if (s == NULL)
		return;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	for (i = 0; i < (end - start + 1) / 2; i++)
	{
		aux = start[i];
		start[i] = end[-i];
		end[-i] = aux;
	}
}
