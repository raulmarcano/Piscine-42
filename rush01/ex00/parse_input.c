int *parse_input(char *str, int *dest)
{
    int		index;
    int     pos;
    int		value;

    index = 0;
    pos = 0;
    while (str[index] != '\0')
    {
        if(str[index] >= '1' && str[index] <= '4')
        {
			value = str[index] - '0';
            dest[pos] = value;
            pos++;
        }
        index++;
    }

    return dest;
}