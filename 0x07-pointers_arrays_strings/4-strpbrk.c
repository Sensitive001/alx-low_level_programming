#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of a bytes
 * @s: The string to be searched
 * @accept: The set of bytes searched for
 *
 * Return: If a set is matched - a pointer to the matched type
 *         If no set is matched  - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
