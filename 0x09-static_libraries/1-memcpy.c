/**
 *  _memcpy - copies first n bytes of the src to dest
 *  @dest: pointer to the dest location
 *  @src: pointer to the src location
 *  @n: number of memory places to replace
 *
 *  Return: returns a pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		*(dest + l) = *(src + l);
		l++;
	}

	return (dest);
}
