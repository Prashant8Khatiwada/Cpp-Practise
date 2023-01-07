#include <stdio.h>
#include <stdlib.h>

void printUnion(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    printf("{");
    while (i < m && j < n)
    {

        if (a1[i] < a2[j])
        {

            printf(",%d", a1[i++]);
        }
        else if (a2[j] < a1[i])
        {
            printf(",%d", a2[j++]);
        }
        else
        {
            printf(",%d", a2[j++]);
            i++;
        }
    }

    while (i < m)
    {
        printf(",%d", a1[i++]);
    }
    while (j < n)
    {
        printf(",%d", a2[j++]);
    }
    printf("}");
}

int main()
{
    int m, n;
    int a1[] = {1, 2, 4, 5, 7};
    m = sizeof(a1) / sizeof(a1[0]);
    int a2[] = {2, 3, 5, 7};
    n = sizeof(a2) / sizeof(a2[0]);
    printUnion(a1, a2, m, n);
    return 0;
}