#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int main(int ac, char *av[])
{
	if (ac == 3)
		printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
