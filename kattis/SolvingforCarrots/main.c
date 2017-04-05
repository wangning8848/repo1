#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,i;
    scanf("%d %d",&n,&p);
    char s[n];
     for (i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    printf("%d\n",p);
    return 0;
}
