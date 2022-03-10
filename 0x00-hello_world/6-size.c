#include<stdio.h>
int main()
{
	char c;
	int i;
	long int d;
	long long int l;
	float f;

	printf("Size of char: %zu byte\n", sizeof(c));
	printf("Size of an int: %zu bytes\n", sizeof(i));
	printf("Size of a long int: %zu bytes\n", sizeof(d));
	printf("Size of a long long int: %zu bytes\n", sizeof(l));
	printf("Size of a float: %zu bytes\n", sizeof(f));

	return 0;
}
