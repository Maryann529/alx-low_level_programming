/**
 * _strcmp - compares to strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if equal lest than 0 if s2 is greater and
 * greater 0 if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0;

	while (1)
	{
		if (s1[l] == '\0' && s2[l] == '\0')
			return (0);
		else if (s1[l] == s2[l])
		{
			l++;
			continue;
		}
		else
			return (s1[l] - s2[l]);
		l++;
	}
}
