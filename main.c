# include "Libft/libft.h"
# include "get_next_line.h"

int main(int ac, char **av)
{
	char	*line;
	int	fd;
	int	i;

	line = NULL;
	i = 1; 
	if (ac > 1)
	{
		while (i  < ac)
		{
			fd = open(av[i], O_RDONLY);
			while (get_next_line(fd, &line))
			{
				ft_putendl(line);
				ft_strdel(&line);
			}
			close(fd);
			i++;
		}
	}
	else
		ft_putendl("Error");
	return (0);
}

