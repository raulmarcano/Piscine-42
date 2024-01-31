#include <stdio.h>
#include <unistd.h>

int		*parse_input(char *str, int *dest);
void	print_result(int arr[4][4]);
void	set_fours(int const numbers[16], int values[4][4]);
int		check_input(char *str);
void	solve(int numbers[16], int values[4][4]);

int	main(int argc, char	const *argv[])
{
	int	numbers;
	int	values[4][4];

	(void) argc;
	values [4][4] = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0}
	};
	if ((check_input((char *)argv[1])))
	{
		write(1, "Bien\n", 5);
		parse_input((char *) argv[1], numbers);
		solve(numbers, values);
		print_result(values);
	}
	else
		write(1, "Error", 5);
}
