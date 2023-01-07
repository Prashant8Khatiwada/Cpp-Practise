#include <stdio.h>
#define N 10
int main()
{
    int i, k = 0, j, t;
    int U[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int A[N] = {1, 3, 4, 5, 7};
    int B[N] = {1, 2, 4, 6, 8, 10};
    int SA[N], SB[N], US[N], CS[N], DS[N], C[N], D[N];
    for (i = 0; i < N; i++)
    {
        if (U[i] != -1)
            US[i] = 1;
    }
    printf("The Bit String representation of Universal set\n");
    for (i = 0; i < N; i++)
        printf("%d ", US[i]);
    printf("\n");
    for (i = 0; i < N; i++)
    {
        t = 0;
        for (j = 0; j < N; j++)
        {
            if (A[j] == U[i])
            {
                t = 1;
                break;
            }
        }
        if (t == 1)
            SA[i] = 1;
        else
            SA[i] = 0;
    }
    printf("The Bit String representation of set A\n");
    for (i = 0; i < N; i++)
        printf("%d ", SA[i]);
    printf("\n");
    for (i = 0; i < N; i++)
    {
        t = 0;
        for (j = 0; j < N; j++)
        {
            if (B[j] == U[i])
            {
                t = 1;
                break;
            }
        }
        if (t == 1)
            SB[i] = 1;
        else
            SB[i] = 0;
    }
    printf("The Bit String representation of set B\n");
    for (i = 0; i < N; i++)
        printf("%d ", SB[i]);
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        if (SA[i] == 1 || SB[i] == 1)
            CS[i] = 1;
        else
            CS[i] = 0;
    }
    for (i = 0; i < 10; i++)
    {
        if (CS[i] == 1)
            C[k++] = U[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (SA[i] == 1 && SB[i] == 1)
            DS[i] = 1;
        else
            DS[i] = 0;
    }
    printf("The union set is\n");
    for (i = 0; i < k; i++)
        printf("%d ", C[i]);
    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (DS[i] == 1)
            D[k++] = U[i];
    }
    printf("\nThe intersection set is\n");
    for (i = 0; i < k; i++)
        printf("%d ", D[i]);
    return 0;
}