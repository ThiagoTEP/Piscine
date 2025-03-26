#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int main(void)
{
	int a = 9;
	int b = 2;

	int *div;
	int *mod;

	ft_div_mod( a, b, div, mod);

	printf("O valor da divisao = %d\nO valor do modulo = %d\n", *div, *mod);

	return 0;
}
