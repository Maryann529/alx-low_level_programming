#include "main.h"

/**
 * is_punc - checks for punctuation.
 * @ch: is the char value passed to check if punc.
 * Return: 1 if it is punctuation and 0 if not.
 */
int is_punc(char ch)
{
	if (ch == '.' || ch == ',' || ch == ' ' || ch == '\t' || ch == '\n')
		return (1);
	if (ch == '!' || ch == '?' || ch == ';')
		return (1);
	if (ch == ')' || ch == '(' || ch == '{' || ch == '}')
		return (1);
	else
		return (0);
}
/**
 * cap_string - capitalizes first letter of every word.
 * @str: is the input string to be augmented.
 * Return: the changed string..
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (is_punc(str[i - 1]) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
