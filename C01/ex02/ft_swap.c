#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 6;


	printf("Antes x = %d e y =  %d\n", x , y);

	ft_swap(&x, &y);

	printf("Depois x = %d e y = %d\n", x , y);

	return 0;
}
*/
