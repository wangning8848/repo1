#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    if (m-45 < 0)
    {
        m = m -45 +60;
        h = h -1;
    }
    else
         m = m -45;
    if (h < 0)
     h =h +24;
    printf("%d %d", h, m);
    return 0;
}
