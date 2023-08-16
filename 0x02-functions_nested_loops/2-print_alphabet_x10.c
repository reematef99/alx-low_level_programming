 #include"main.h"
/**
 *print_alphabet_x10 - function that will print the alphab *et 10 times
 *
 *Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
	}
}
