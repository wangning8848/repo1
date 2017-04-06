#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[50];
    int i = 0, output = 1;
    scanf("%s", input);
    while(input[i]!=0)
    {
        if (input[i] == 'A' && output == 1)
            output = 2;
        else if (input[i] == 'A' && output == 2)
            output = 1;
        else if (input[i] == 'B' && output == 2)
            output = 3;
        else if (input[i] == 'B' && output == 3)
            output = 2;
        else if (input[i] == 'C' && output == 1)
            output = 3;
        else if (input[i] == 'C' && output == 3)
            output = 1;
        ++i;
    }
    printf("%d",output);
    return 0;
}
