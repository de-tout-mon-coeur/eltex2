#include <stdio.h>

int main() 
{
    int N;
    printf("Enter array size: ");
    scanf("%d", &N);

    int array[N][N];

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (i + j >= N - 1) 
            {
                array[i][j] = 1;
            } 
            else 
            {
                array[i][j] = 0;
            }
        }
    }

    printf("Output:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
