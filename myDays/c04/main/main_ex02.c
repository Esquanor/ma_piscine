
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int main(int av, char *ac[])
{
	if (av == 2)
		ft_putnbr(atoi(ac[1]));
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	return (0);
}
