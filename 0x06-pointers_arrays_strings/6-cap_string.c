#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @st: string that czpitalize;
 *Return: return capitalize
 */
char *cap_string(char *st)
{
	int ndx = 0;

	while (st[++ndx])
	{
		while (!(st[ndx] >= 'a' && st[ndx] <= 'z'))
			ndx++;
		if (st[ndx - 1] == ' ' ||
				st[ndx - 1] == '\t' ||
				st[ndx - 1] == '\n' ||
				st[ndx - 1] == ',' ||
				st[ndx - 1] == ';' ||
				st[ndx - 1] == '.' ||
				st[ndx - 1] == '!' ||
				st[ndx - 1] == '?' ||
				st[ndx - 1] == '"' ||
				st[ndx - 1] == '(' ||
				st[ndx - 1] == ')' ||
				st[ndx - 1] == '{' ||
				st[ndx - 1] == '}')
			st[ndx] -= 32;
	}
	return (st);
}
