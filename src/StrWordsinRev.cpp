/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){

	int i, j, k;
	char c;
	i = 0;
	j = len - 1;
	while (i < j)
	{
		c = input[i];
		input[i] = input[j];
		input[j] = c;
		i++;
		j--;
	}

	i = 0;
	k = 0;
	while (i <= len)
	{
		if (input[i] == ' ' || input[i] == '\0')
		{
			j = i - 1;
			while (k < j)
			{
				c = input[k];
				input[k] = input[j];
				input[j] = c;
				k++;
				j--;
			}
			k = i + 1;
		}
		i++;
	}

}
