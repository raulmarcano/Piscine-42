#include <stdio.h>

int	check_input(char *str)
{
	int	count_char;
	int	count_spaces;
	int	i;

	count_char = 0;
	count_spaces = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2)
		{
			if (str[i] == ' ')
			count_spaces++;
		}
		else
		{
			if (str[i] >= '1' && str[i] <= '4')
			count_char++;
		}
		i++;
	}
	return (count_char == 16 && count_spaces == 15 && i == 31);
}
