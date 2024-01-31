#include <unistd.h>
#include <stdio.h>

/**
 * Array (arr) is defined as arr[4][4]
*/
void print_result(int arr[4][4])
{
	int		index;
    int		i;
    int		j;
	char	string[32];

	index = 0;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			string[index] = arr[i][j] + '0';
			if(j < 3)
			{
				string[index + 1] = ' ';
				index += 2;
			}
			else
				index++;
			j++;
		}
		string[index] = '\n';
		index++;
		j = 0;
		i++;
	}

	write(1, &string, 32);
}
