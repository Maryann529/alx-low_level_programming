/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 *
 * Return: the pointer for the start of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int found;
	int start;

	while (haystack[i] != '\0')
	{
		if (needle[j] == '\0')
			return ('\0');
		j = 0;
		start = 0;
		found = 0;
		if (haystack[i] == needle[j])
			start = 1;
		while (needle[j] != '\0' && haystack[i + j] != '\0' && start)
		{
			if (haystack[i + j] == needle[j])
				found = 1;
			else
			{
				found = 0;
				break;
			}
			j++;
		}
		if (found)
			return (haystack + i);
		i++;
	}
	return ('\0');
}
