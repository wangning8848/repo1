#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,i,j;
    int x = 0;
    scanf("%d",&n);
    int p[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for (j=0;j<n;j++)
    {
        x+=pow(p[j]/10,p[j]-(p[j]/10)*10);
    }
    printf("%d",x);
    return 0;
}
