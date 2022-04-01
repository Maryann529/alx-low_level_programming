/**
 * _memset - fills the first n bytes of the memory by s
 * @s: pointer to the memory area
 * @b: the constant byte to replace the memory
 * @n: number of memory places to replace
 *
 * Return: returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		*(s + l) = b;
		l++;
	}

	return (s);
}
