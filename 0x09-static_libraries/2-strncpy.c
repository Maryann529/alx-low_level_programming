/**
 * _strncpy - copy the second string to the first string
 * @dest: the pointer to copy the string to
 *  @src: the pointer to copy the string from
 *  @n: number of characters to print from second string
 *
 *  Return: the copyinated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}
	if (l < n)
	{
		while (dest[l] != '\0' && l < n)
		{
			dest[l] = '\0';
			l++;
		}
	}
	return (dest);
}
