#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// sort the characters in a string
// in ascending order

// bubble sort
void f(char *str, int len) {
	int i, j;
	char temp;

	if (!str)
		return;

	// i is for counting, so it is better
	// to start from 1, and count up to len - 1, inclusive
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (str[j] > str[j + 1]) {
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
}

// quick sort
void f_quick(char *str, int len) {
	int piv, i;
	char temp;

	if ((!str) || (len <= 0))
		return;

	if (len == 1)
		return;

	// reach here, we have len >= 2
	piv = len - 1;
	temp = str[piv];
	for (i = piv - 1; i >= 0; i--)
		if (str[i] > temp) {
			str[piv] = str[i];
			str[i] = str[piv - 1];
			piv--;
		}
	str[piv] = temp;

	f_quick(str, piv);
	f_quick(str + piv + 1, len - piv - 1);
}

int main(int argc, char *argv[])
{
	char s[20] = "hello, world!";
	
	printf("s: %s\n", s);

//	f(s, strlen(s));
	f_quick(s, strlen(s));
	printf("s: %s\n", s);

	return 0;
}
