/**
 * _strchr - finds the first occurrence of a character c
 * @s: the pointer to the string
 * @c: the character to find
 *
 * Return: returns a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int l = 0;
	char *pr;

	while (s[l] != '\0')
	{
		if (s[l] == c)
		{
			pr = &s[l];
			break;
		}
		l++;
	}

	if (s[l] == '\0')
		return (0);
	return (pr);
}
