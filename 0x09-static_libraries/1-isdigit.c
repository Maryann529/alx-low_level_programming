/**
 * _isdigit - check if a character is digit
 * @c: The character to check
 *
 * Return: On success 1 and 0 is digit is not uppercase
 */
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
