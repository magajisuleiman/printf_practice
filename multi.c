#include <stdio.h>


int multi(int, int);

int main(void)
{
	int my_num;

	my_num = multi(4, 5);

	printf("%d\n", my_num);
	return (0);
}

int multi(int a, int b)
{
	int mult;

	mult = a * b;

	return (mult);
}
