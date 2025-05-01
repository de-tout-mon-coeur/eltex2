#include <stdio.h>

int main() 
{
    int N;
    printf("Enter array size: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter array elements: ");
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOutput: ");
    for (int i = N - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
