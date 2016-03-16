/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int mul(int k)
{
	int s = 1, x = 0, i = 0;
	while (i != k)
	{
		s = x + s * 10;
		i++;
	}
	return s;
}

int no_of_digits(int num)
{
	int digit_count = 0;

	while (num > 0)
	{
		digit_count++;
		num /= 10;
	}

	return digit_count;
}

int convert_int(char *str1, int num, int *i)
{
	int c, n1, a, b, x;
	c = no_of_digits(num);
	n1 = mul(c);
	a = n1 / 10;
	while (num != 0)
	{
		x = num / a;
		str1[*i] = x + '0';
		num = num % a;
		a = a / 10;
		(*i)++;
	}
	return *i;
}


void number_to_str(float number, char *str,int afterdecimal){

	int n1, d, m, f2, c, j, *p;
	float x;
	n1 = number;
	if (n1 < 0 && afterdecimal == 0)
	{
		int i=1;
    	n1 = -(n1);
		str[0] = '-';
		j = convert_int(str, n1, &i);
		str[j] = '\0';
	}
	else if (n1 < 0 && afterdecimal > 0)
	{
		int i = 1,k=0;
		n1 = -(n1);
		str[0] = '-';
		x = (-(number)-n1);
		m = mul(afterdecimal);
		f2 = x*m;
		j = convert_int(str, n1, &i);
		str[j++] = '.';
		k = convert_int(str, f2, &j);
		str[k++] = '\0';
	}
	else if (n1 > 0 && afterdecimal == 0)
	{
		int i = 0;
		j = convert_int(str, n1, &i);
		str[j] = '\0';

	}
	else
	{
		int i = 0,k;
		x = number - n1;
		m = mul(afterdecimal);
		f2 = x*m;
		j = convert_int(str, n1, &i);
		str[j++] = '.';
		k = convert_int(str, f2, &j);
		str[k++] = '\0';
	}

}
