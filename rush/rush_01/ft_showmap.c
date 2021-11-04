#include <unistd.h>

void	ft_showmap(int **map, int l)
{
	int col;
	int li;
	int colun;
	char space;
	
	li = 1;
	space = ' ';
	while (li < (l + 1))
	{
		col = 1;
		while (col < l + 1)
		{
				colun = map[li][col] + 48;
				write(1, &colun, 1);
				if (col != l)
					write(1, &space, 1);
			col++;
		}
		write(1, "\n", 1);
		li++;
	}
}
