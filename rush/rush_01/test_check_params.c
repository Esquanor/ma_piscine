#include <unistd.h>

int ft_check_params(char *param);

int main(int ac, char *av[])
{
	if (ac != 2)
		write(1, "error\n", 6);
	else
	{
		if (ft_check_params(av[1]) == 0)
			write(1, "error\n", 6);
		else
			write(1, "param valid\n", 12);
	}
	return (0);
}
