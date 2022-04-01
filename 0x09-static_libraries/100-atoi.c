#include <stdio.h>

/**
 * _atoi - converts string to number
 * @s: the string to convert
 *
 * Return: the converted number
 */
int _atoi(char *s)
{
	int l = 0;
	int sign = 1;
	int num = 0;
	int temp;

	while (s[l] != '\0' && !(s[l] >= '0' && s[l] <= '9'))
	{
		sign *= s[l] == '-' ? -1 : 1;
		l++;
	}
	while (s[l] != '\0' && (s[l] >= '0' && s[l] <= '9'))
	{
		temp = s[l] - '0';
		num *= 10;
		num += temp;
		l++;
	}
	return (num * sign);
}
