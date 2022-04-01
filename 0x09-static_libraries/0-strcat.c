/**
 * _strcat - concatinates the second string to the first string
 * @dest: the pointer to concat the string to
 * @src: the pointer to concat the string from
 *
 * Return: the concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int dl = 0;
	
	while (dest[dl] != '\0')
		dl++;
	
	while (src[l] != '\0')
	{
		dest[dl + l] = src[l];
		l++;
	}
	dest[dl + l] = '\0';
	return (dest);
}
