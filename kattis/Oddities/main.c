#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[20],output[20];
    int sets;
    int i;
    scanf("%d",&sets);
    for(i=0;i<sets;i++)
    {
        scanf("%d",&input[i]);
        output[i] = input[i]%2;
    }
    for (i=0;i<sets;i++)
    {
        if(output[i] == 0)
            printf("%d is even\n",input[i]);
        else
            printf("%d is odd\n",input[i]);
    }
    return 0;
}
