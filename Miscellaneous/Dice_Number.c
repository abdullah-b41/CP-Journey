#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int a,b,c,d,e,f;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

        int x = a;
        if (b>a && b>=c) x = b;
        else if (c>a && c>b) x = c;

        int z = a;
        if (b<a && b<=c) z = b;
        else if (c<a && c<b) z = c;

        int y = a+b+c-x-z; 

        int m = d;
        if (e>d && e>=f) m = e;
        else if (f>d && f>e) m = f;

        int o = d;
        if (e<d && e<=f) o = e;
        else if (f<d && f<e) o = f;

        int n = d+e+f-m-o;

        if (x*100+y*10+z > 100*m+n*10+o) printf("Alice\n");
        else if (x*100+y*10+z < 100*m+n*10+o) printf("Bob\n");
        else printf("Tie\n");
    }
    return 0;
}