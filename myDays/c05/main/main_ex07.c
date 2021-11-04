#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

int main(int ac, char *av[])
{
	if (ac == 2)
		printf("%d\n", ft_find_next_prime(atoi(av[1])));
	return (0);
}
