/**
 * _strpbrk - searches a string for any of the bytes
 * @s: the string to search
 * @accept: set of bytes to search from
 *
 * Return: a pointer to the found byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int found;

	while (*(s + i) != '\0')
	{
		j = 0;
		found = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found)
			return (s + i);
		i++;
	}
	return ('\0');
}
