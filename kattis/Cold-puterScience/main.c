#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    int result =0;
    scanf("%d",&n);
    int  t[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    for (j=0;j<n;j++)
    {
        if (t[j] < 0)
            result++;
    }
    printf("%d",result);
    return 0;
}
