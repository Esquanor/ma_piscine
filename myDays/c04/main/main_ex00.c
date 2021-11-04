#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int main(int av, char *ac[])
{
	if (av == 2)
		printf("%d\n", ft_strlen(ac[1]));
	return (0);
}
