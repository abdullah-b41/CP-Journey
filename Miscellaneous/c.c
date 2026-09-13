#include <stdio.h>

int main(void)
{
    float a1, a2, b1, b2, c1, c2;
    printf("x1: \ny1: \nc1: \nx2: \ny2: \nc2\n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
    if(((a1==a2 && b1==b2) && c1!=c2) || ((a1==a2 && c1==c2) && b1!=b1) || (a1!=a2 && (b1==b2 && c1==c2)))
    {
        printf("Invalid");
    }
    else 
    {
        printf("x= %f\n", ((c1*b2 - c2*b1) / (a1*b2 - a2*b1)));
        printf("y= %f\n", ((a1*c2 - a2*c1) / (a1*b2 - a2*b1)));
    }
    return 0;
}