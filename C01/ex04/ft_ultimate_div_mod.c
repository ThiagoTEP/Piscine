#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main(void)
{
	int x= 5;
	int y= 2;

	ft_ultimate_div_mod(&x, &y);

	printf("o Valor da Div = %d\nO Valor do Mod = %d\n", x, y);

	return 0;
}
*/
