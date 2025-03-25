#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (i < 0)
	{
		i *= -1;
		ft_putchar('-');
		ft_putnbr(i);
	}
	 else if(i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	} 
	else
	{
		ft_putchar(i + '0');
	}

}

int main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-5);
	ft_putchar('\n');
	ft_putnbr(-42);
	return 0;
}
