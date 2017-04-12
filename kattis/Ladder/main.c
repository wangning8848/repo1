#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    int h,l;
    int v;
    scanf("%d %d",&h,&v);
    l = h/sin(v*PI/180);
    printf("%d\n",l+1);
    return 0;
}
