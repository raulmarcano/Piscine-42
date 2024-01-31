#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	ft_atoi(char *str);
char *leyend(char *buff);

void	get_map_info(int map)
{
    char *buff;
    ssize_t nr_bytes;
	int	buff_num;
	char *leyend_vars;
    
	buff = (char *)malloc(14 * sizeof(char));
    
	nr_bytes = read(map, buff, 14);
    
	if (nr_bytes == 0)
        return ;
	buff_num = ft_atoi(buff);
	leyend_vars = leyend(buff);
	printf("%d", buff_num);
	printf("%c", leyend_vars[2]);
	free(buff);

}

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	b;

	i = 0;
	value = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '+' || str[i] == 32 || str[i] == '-'
				|| (str[i] >= 9 && str[i] <= 13)) && b == 0)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			value = value * 10 + (str[i] - '0');
			i++;
			b = 1;
		}
		else
			break ;
	}
	return (value);
}

char *leyend(char *buff)
{
	int	i;
	int	j;
	char *leyend_vars;

	leyend_vars = (char *)malloc(4 * sizeof(char));
	i = 0;
	j = 0;
	while (buff[i] != '\n')
		{
			if(!(buff[i] >= '0' && buff[i] <= '9'))
			{
				while(buff[i] != '\n')
				{
					leyend_vars[j] = buff[i];
					j++;
					i++;
				}
				leyend_vars[j] = '\0';
				break ;
			}
			i++;
		}
	return (leyend_vars);
}
