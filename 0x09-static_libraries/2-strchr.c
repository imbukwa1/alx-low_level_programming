#include "main.h"
#include <stddef.h>
/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; j++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}