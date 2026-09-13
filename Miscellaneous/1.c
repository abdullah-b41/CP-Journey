#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j;
    double k;
    char p[] = " ";  
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n", &j);
    scanf("%lf\n", &k);
    scanf("%s\n", &p[0]);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + j);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + k);
    // Concatenate and print the String variables on a new line
    printf("%c %c\n", s[0], p[0]);
    // The 's' variable above should be printed first.

    return 0;
}