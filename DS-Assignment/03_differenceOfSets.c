#include <stdio.h>
int a[10], b[10], i, j, n, m, flag = 0;
void difference()
{
    printf("\nA-B\n {");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d,", a[i]);
    }

    printf("}\n\nB-A\n{");
    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d,", b[i]);
    }
    printf("}");
}
int main()
{
    printf("Enter the size of array A\n");
    scanf("%d", &n);
    printf("Enter the element of First array A\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of array B\n");
    scanf("%d", &m);
    printf("Enter the elements of array B\n");
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("difference of set\n");
    difference();
    return 0;
}