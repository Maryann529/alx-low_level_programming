/**
 * _strlen - returns the length of the array
 * @s: the required string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
