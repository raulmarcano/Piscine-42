#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	get_map_info(int map);

int	main(int argc, char **argv)
{
	int map;

	if (argc != 2)
		{
			write(2, "Argument failure\n", 17);
			return (1);
		}
	map = open(argv[1], O_RDONLY);
	if (map == -1)
	{
		write(2, "map error\n", 10);
		return (1);	
	}
	get_map_info(map);
	close(map);
	return (0);
}