#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,grade[5][4],winner;
    int sum[5];
    int score = 0;
    for(i=0;i<5;i++)
    {
        sum[i]=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&grade[i][j]);
            sum[i]+=grade[i][j];
        }
    }
     //printf("%d %d %d %d %d\n",sum[0],sum[1],sum[2],sum[3],sum[4]);
    for(i=0;i<5;i++)
    {
        if(sum[i]>score)
        {
            score=sum[i];
            winner=i+1;
        }
    }
    printf("%d %d\n",winner,score);
    return 0;
}
