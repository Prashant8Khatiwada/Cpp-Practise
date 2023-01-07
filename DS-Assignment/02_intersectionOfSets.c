#include <stdio.h>
#include <stdlib.h>

void printIntersection(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    printf("{");
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a1[i] > a2[j])
        {
            j++;
        }
        else
        {
            printf("%d,", a1[i++]);
            j++;
        }
    }
    printf("}");
}
int main()
{
    int m, n;
    int a1[] = {1, 3, 4, 5, 7};
    m = sizeof(a1) / sizeof(a1[0]);
    int a2[] = {2, 3, 5, 6};
    n = sizeof(a2) / sizeof(a2[0]);
    printIntersection(a1, a2, m, n);
    return 0;
}