#include <stdio.h>
#include <stdlib.h>

int cnt = 0;

int     is_valid(int* arr, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (arr[i] == arr[col])                      // 같은 열에 놓인 경우
            return (0);
        else if (col - i == arr[col] - arr[i])      // 대각선에 놓인 경우
            return (0);
        else if (col - i == arr[i] - arr[col])      // 대각선에 놓인 경우
            return (0);
    }
    return (1);
}

void    backTracking(int* arr, int N, int col)
{
    if (col == N)
        cnt++;
    else
    {
        for (int i = 0; i < N; i++)
        {
            arr[col] = i;
            if (is_valid(arr, col))
                backTracking(arr, N, col + 1);
        }
    }
}

int main(void)
{
    int N;
    int* arr;

    scanf("%d", &N);

    arr = (int*)malloc(sizeof(int) * N);
    if (arr == NULL)
        return (0);

    backTracking(arr, N, 0);

    printf("%d", cnt);

    return (0);
}