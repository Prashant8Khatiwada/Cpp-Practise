#include <stdio.h>
#include <stdlib.h>
float min(float a, float b);
float max(float a, float b);
float min1(float a, float b);
int main()
{
    float fa, fb, fi, fu, fac, fb1, fu1;
    float x = 1.0;
    printf("Enter membership function of first set:\n");
    scanf("%f", &fa);
    printf("Enter membership function of second set:\n");
    scanf("%f", &fb);
    fi = min(fa, fb);
    fu = max(fa, fb);
    fb1 = x - fb;
    fu1 = min1(fa, fb1);
    fac = x - fa;
    printf("The membership function of intersection = %0.1f\n", fi);
    printf("The membership function of union = %0.1f\n", fu);
    printf("The membership function of complement of first set = %0.1f\n", fac);
    printf("The membership function of difference = %0.1f\n", fu1);
    return 0;
}
float min(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}
float max(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}
float min1(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}