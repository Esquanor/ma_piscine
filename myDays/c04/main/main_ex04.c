
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int main(int av, char *ac[])
{
	if (av == 3)
		ft_putnbr_base(atoi(ac[1]), ac[2]);
    return (0);
}
