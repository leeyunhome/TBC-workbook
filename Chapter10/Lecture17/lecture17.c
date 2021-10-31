#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 4

//int sum2d_2(int ar[][COLS], int row)
//{
//}
//
//int sum2d_3(int* ar, int row, int col)
//{
//}
//
int sum2d_4(int row, int col, int ar[row][col])
{
    int r, c, tot = 0;
    for (r = 0; r < row; r++)
        for (c = 0; c < col; c++)
            tot += ar[r][c];
    return tot;
}

int main()
{
    int n;

    printf("Input array length : ");
    scanf("%d", &n);

    // int n = 7;
    float my_arr[n];    // Note: cannot change length after declaration

    for (int r = 0; r < n; r++)
        my_arr[r] = (float)r;

    for (int r = 0; r < n; r++)
        printf("%f\n", my_arr[r]);

    int data[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2}
    };

    printf("%d\n", sum2d_4(ROWS, COLS, data));

	return 0;
}
