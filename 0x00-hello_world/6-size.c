#include <stdio.h>
/**
  *main -Enrty point
  *Return: always 0 (success)
  */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("size of int: %d bytes\n", sizeof(intType));
	printf("size of float: %d bytes\n", sizeof(floatType));
	printf("size of double: %d bytes\n", sizeof(doubleType));
	printf("size of char: %d bytes\n", sizeof(charType));
	return (0);
}
