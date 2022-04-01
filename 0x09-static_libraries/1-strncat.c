/**
 * _strncat - concatinates the second string to the first string
 * @dest: the pointer to concat the string to
 * @src: the pointer to concat the string from
 * @n: number of characters to print from second string
 *
 * Return: the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int dl = 0;

	while (dest[dl] != '\0')
		dl++;

	while (src[l] != '\0' && l < n)
	{
		dest[dl + l] = src[l];
		l++;
	}
	dest[dl + l] = '\0';
	return (dest);
}
