#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void backtrack_function(int row, int num);
int can_place(int row, int col);
void display(int num);

int chess_board[20], count;

void backtrack_function(int row, int num)
{
    int col;
    for (col = 1; col <= num; col++)
    {
        if (can_place(row, col)) //function call to check where to place the queen
        {
            chess_board[row] = col;
            if (row == num) //ensures if all queens are placed or not
            {
                display(num); //once all queens placed; display solution.
            }
            else
            {
                backtrack_function(row + 1, num); //function call to place remaining queens.
            }
        }
    }
}

int can_place(int row, int col)
{
    int count;
    for (count = 1; count <= row - 1; count++)
    {
        if (chess_board[count] == col) //checks if there is any threat from queen placed previously.
        {
            return 0;
        }
    }
    return 1; //no threats, queen can be placed.
}

void display(int num)
{
    int m, n;
    printf("\n\n\tPossible Solution %d:\n\n", ++count);
    for (m = 1; m <= num; m++)
    {
        printf("\t[%d]", m);
    }
    for (m = 1; m <= num; m++)
    {
        printf("\n\n[%d]", m);
        for (n = 1; n <= num; n++)
        {
            if (chess_board[m] == n)
            {
                printf("\tQ"); //queen at (i,j) position.
            }
            else
            {
                printf("\t*"); //empty slot.
            }
        }
    }
}

int main()
{
    int num;
    printf("\nEnter Number of Queens:\t");
    scanf("%d", &num);
    if (num <= 3)
    {
        printf("\nNumber should be greater than 3 to form a Matrix\n");
    }
    else
    {
        backtrack_function(1, num); //call to nqueen function
    }
    printf("\n\n");
    return 0;
}