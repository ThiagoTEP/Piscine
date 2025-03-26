#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
		i++;

	return i;
}
/*
#include <stdio.h>
int main(void)
{
	char *x = "teste";
	int result;

	result = ft_strlen(x);

	printf("%d\n", result);
	return 0;


}
*/
