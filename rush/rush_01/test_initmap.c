
#include <stdlib.h>
#include <stdio.h>

int	**ft_initmap(char *p, int len);
void	ft_showmap(int **map, int l);
int	ft_check_row(int **map, int l, int len);
int	ft_check_column(int **map, int c, int len);

int main(int ac, char *av[])
{
	if (ac != 3)
		return (0);
	
	int len = atoi(av[2]);
	int **map = ft_initmap(av[1], len);
	if (!map)
		return (0);
	
	int l = 0;
	int c;
	while (l < (len + 2))
	{
		c = 0;
		while (c < (len + 2))
		{
			printf("%d ", map[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	printf("\n\n");

	ft_showmap(map, len);

	printf("\n\n");

	map[1][1] = 1;
	map[1][2] = 3;
	map[1][3] = 2;
	map[1][4] = 4;

	printf("\n\n");

	ft_showmap(map, len);
	printf("\n\n");

	printf("la ligne = %d\n", ft_check_row(map, 1, len));

	map[1][3] = 3;
	map[2][3] = 4;
	map[3][3] = 1;
	map[4][3] = 2;

	ft_showmap(map, len);
	printf("\n\n");

	printf("la ligne = %d\n", ft_check_column(map, 3, len));


	return (0);
}
