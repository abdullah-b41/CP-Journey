#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pi = 3.141592653589793;

int main()
{
    float a;
    scanf("%f", &a);
    if((int)a==1)
    {
        printf("0");
        return 0;
    }
    else if ((int)a==-1)
    {
        printf("180");
        return 0;
    }
    else 
    {
    float sum=a;
    for(int i=3; i>0; i+=2)
    {
        float digit = pow(a,i)/i;
        float num = 1, den = 1;
        for(int j=1; j<i; j+=2)
        {
            num = num*j;
        }
        for(int j=2; j<i; j+=2)
        {
            den = den*j;
        }
        if(fabs((num/den)*digit) <= .0001)
        {
            break;
        }
        sum += digit*(num/den);
    }
    float final = pi/2 - sum;
    int degree = (int)round(final*(180/pi));
    printf("%d", degree);
    }
}