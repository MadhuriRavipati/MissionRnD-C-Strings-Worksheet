/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
int length(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
char KthIndexFromEnd(char *str, int K) {
	if (str == nullptr || str == "")
		return '\0';
	int l, i, l2 = 0;
	l = length(str);
	if (K > l || K < 0 || l < 0)
		return '\0';
	if (K == 0)
		return str[l - 1];
	else if (K == l - 1)
		return str[0];
	else
	{
		l2 = l - K;
		l2 = l2 - K;
		return str[l2];
	}

}