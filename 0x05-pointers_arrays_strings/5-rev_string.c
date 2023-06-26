#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c;
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

	for (i = 0; 1 < (end - start + 1) / 2; 1++)
	{
		aux = start[i];
		start[i] = end[-i];
		end[-i] = aux;
	}
}
