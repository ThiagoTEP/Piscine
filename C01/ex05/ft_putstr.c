#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while( str[i] != '\0')
	{
		write(1 , &str[i], 1);
		i++;
	}

}
/*
int main(void)
{
	char *x = "teste de escrita";

	ft_putstr(x);

	return 0;
}
*/
