#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void printcomb(int i, int j, int limit, int n)
{
	int x;

	x = limit/10;
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	if (!(i == (x - 2)  && j == (x - 1)))
    	{
        	ft_putchar(',');
        	ft_putchar(' ');
    	}	
}

void ft_print_combn(int n)
{
	int i;
	int j;
	int count;
    	int limit;

        limit = 1;
    	count = 0;
   	while (count < n)
   	{
       		limit *= 10;
        	count++;
  	}
    	i = 0;
	while (i < limit)
	{
        	j = i + 1;
       		while (j < 10)
       		{
            		printcomb(i, j, limit, n);
            		j++;
        	}
       		i++;
	}

}

int main(void)
{
	ft_print_combn(2);
	return 0;
}
