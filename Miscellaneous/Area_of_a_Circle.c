#include <stdio.h>
double pie = 3.14159;
int main() {
    double a;
    scanf("%lf", &a);
    printf("A=%.4lf", (pie*a*a));
 
    return 0;
}