#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,i,output;
    int p[n];
    scanf("%d", &x);
    scanf("%d", &n);
    output = x;
    for(i=0;i<n;i++)
    {
        scanf("%d", &p[i]);
        output += x - p[i];
    }

    printf("%d", output);
    return 0;
}
