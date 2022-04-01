/**
 * _isupper - check if a character is upprecase
 * @c: The character to check
 *
 * Return: On success 1 and 0 is character is not uppercase
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
