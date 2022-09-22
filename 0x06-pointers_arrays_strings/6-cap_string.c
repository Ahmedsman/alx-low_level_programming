#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0, j = 0, k = 0;
	char sep[] = {'\n', ' ', '\t', ',', ';', '"',
		'(', ')', '{', '}', '?', '!', '.'};

	while (str[i] != '\0')
	{
		k = 0;
		for (j = 0; sep[j] != '\0' && i != 0; j++)
		{
			if (str[i - 1] == sep[j])
			{
				k = 1;
				break;
			}
		}
		if (i == 0 || k == 1)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
