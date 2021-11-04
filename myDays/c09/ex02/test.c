#include <stdlib.h>
#include <stdio.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (check_charset(str[i], charset) == 1)
			i++;
		count++;
		while (check_charset(str[i], charset) == 0 && str[i])
			i++;
	}
	return (count);
}

char	*malloc_word(int start, int end, char *str)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		start;
	int		end;
	char	**res;

	i = 0;
	start = 0;
	end = 0;
	res = (char **)malloc(sizeof(char *) * count_word(str, charset) + 1);
	if (!res)
		return (NULL);
	while (i < count_word(str, charset))
	{
		start = end;
		while (check_charset(str[start], charset) == 1)
			start++;
		end = start;
		while (check_charset(str[end], charset) == 0 && str[end])
			end++;
		if (str[start] == '\0')
			break;
		res[i] = malloc_word(start, end, str);
		i++;
	}
	res[i] = 0;
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char **split = ft_split(av[1], av[2]);
		for (int i = 0; split[i]; i++)
			printf("%s\n", split[i]);
	}
	return (0);
}

