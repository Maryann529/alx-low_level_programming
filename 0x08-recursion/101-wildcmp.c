#include "main.h"

/**
 * wildcmp - compare 2 strings allowing for * special.
 * @s1: string to compare
 *  @s2: string to comprea
 *  Return:  returns 1 if the str are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
	return (0);
}
