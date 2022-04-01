/**
 * _strcpy - copies the string from src to the dest
 * @dest: the pointer to copy the string to
 * @src: the pointer to copy the string from
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
