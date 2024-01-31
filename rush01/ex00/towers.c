#include <stdio.h>

int numbers[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
int values[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

int aceptation(int val, int arr[4])
{
    int i;
    int prev;
    int jumps;

    i = 0;
    jumps = 0;
    while (i < 4)
    {
        if(prev > arr[i])
        {
            break;
        }
        prev = arr[i];
        jumps++;

        i++;
    }

    return (jumps == val);
}

int bruteforce()
{
    int value;
    int index;
    int answer[4];

    value = 4;
    index = 1;
    while (index <= 4)
    {
        if(aceptation(value, answer))
        {
            break;
        }
    }

    return (answer);
}

int main()
{
    // int num[4] = {1, 2, 3, 4};
    // printf("%d", aceptation(3, num));

    bruteforce();
    return 0;
}