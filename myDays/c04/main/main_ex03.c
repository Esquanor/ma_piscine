
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int ac, char *av[])
{
	if (ac == 2)
		printf("%d\n", ft_atoi(av[1]));
	return (0);
}
