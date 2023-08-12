#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concentrates n bytes of a string to another
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * return: always o
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int m = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len2++;
	while (s2 && s2[len2])
		len++;
	if (n < len)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else	
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);

	while (m < len1)
	{
		s[m] = s1[m];
		m++;
	}

	while (n < len2 && m < (len1 + n))
		s[m++] = s2[k++];
	while (n >= len2 && m < (len1 + len2))
		s[m++] = s2[k++];

	s[m] = '\0';

	return (s);
}
