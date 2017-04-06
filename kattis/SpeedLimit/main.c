#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t[12],input[10],output[10];
    int sets =0;
    int i = 0;
    int j = 0;
    scanf("%d",&input[i]);
    while (input[i]!= -1)
    {
        output[i]=0;
        for(j=0;j<input[i];j++)
        {
            scanf("%d %d",&s,&t[j]);
            if (j == 0)
                output[i]+=s*t[j];
            else
                output[i]+=s*(t[j]-t[j-1]);
        }
        i++;
        scanf("%d",&input[i]);
        sets++;
    }
    for (i=0;i<sets;i++)
    {
        printf("%d miles\n",output[i]);
    }
    return 0;
}
