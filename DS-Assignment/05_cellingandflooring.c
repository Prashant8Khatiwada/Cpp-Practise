#include <stdio.h>
#include <math.h>
int main()
{
    float x = 2.456;
    float c = ceil(x);
    float f = floor(x);
    printf("The floor value of %f is = %f\n", x, f);
    printf("The ceiling value of %f is = %f\n", x, c);
    return 0;
}