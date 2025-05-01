#include <stdio.h>

void fillArray(int N, int array[N][N]) 
{
    int count = 1;
    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    while (top <= bottom && left <= right) 
    {
        
        for (int j = left; j <= right; j++) 
        {
            array[top][j] = count++;
        }
        top++;

        for (int i = top; i <= bottom; i++) 
        {
            array[i][right] = count++;
        }
        right--;

        if (top <= bottom) 
        {
            for (int j = right; j >= left; j--) 
            {
                array[bottom][j] = count++;
            }
            bottom--;
        }

        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--) 
            {
                array[i][left] = count++;
            }
            left++;
        }
    }
}

void printArray(int N, int array[N][N]) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int array[N][N];
    fillArray(N, array);
    printArray(N, array);

    return 0;
}
