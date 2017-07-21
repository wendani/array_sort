#include <stdio.h>
#include <stdlib.h>

// sort the characters in a string
// in ascending order

// Bubble sort
void f(char *str, int len) {

	int i;

	if (!str)
		return;

	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (str[j] > str[j + 1]) {
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
}

int main(int argc, char *argv[])
{
	char s[20] = "hello, world!";
	
	printf("s: %s\n", s);

	f(s, sizeof(s));
	printf("s: %s\n", s);

	return 0;
}
