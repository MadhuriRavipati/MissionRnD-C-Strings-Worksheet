/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
int length1(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
char removeSpaces(char *str)
{
	int i, j;
	if (str == "" || str == nullptr)
		return '\0';
	else{
		for (i = 0; i < length1(str); i++)
		{
			if (str[i] == ' ')
			{
				j = i;
				while (j < length1(str))
				{
					str[j] = str[j + 1];
					j++;
				}
				i = i - 1;
			}

		}
	}
	return *str;
}