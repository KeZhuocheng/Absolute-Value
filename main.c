#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Write a number:");
    scanf("%d",&x);
    if(x<0)
        x=-x;
     else
        x=x;
    printf("abs:%d",x);
    return 0;
}
