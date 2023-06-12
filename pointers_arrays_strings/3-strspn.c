/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c;

	for (c = 0; *(s + c); c++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + c) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (c);
}
