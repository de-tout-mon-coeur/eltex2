#include <stdio.h>

void printMatrix(int n)
{
    int number = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}

int main() 
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printMatrix(N);

    return 0;
}
