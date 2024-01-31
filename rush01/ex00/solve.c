int get_row(int index);
int get_column(int index);

void	solve(int numbers[16], int values[4][4])
{
    int index;
    int value_index;

    index = 0;
    value_index = 0;
    while (index < 16)
    {
        if(numbers[index] == 1)
			values[get_row(index)][get_column(index)] = 4;
        if(numbers[index] == 4)
			values[get_row(index)][get_column(index)] = 1;
		index++;
    }

}

int get_row(int index)
{
    if(index >= 0 && index <= 3)
        return (0);
    else if(index >= 4 && index <= 7)
        return (3);
    else if(index >= 8 && index <= 11)
        return (index % 4);
    else if(index >= 12 && index <= 15)
        return (index % 4);
    else
        return (0);
}

int get_column(int index)
{
    if(index >= 0 && index <= 3)
        return (index);
    else if(index >= 4 && index <= 7)
        return (index % 4);
    else if(index >= 8 && index <= 11)
        return (0);
    else if(index >= 12 && index <= 15)
        return (3);
    else
        return (0);
}