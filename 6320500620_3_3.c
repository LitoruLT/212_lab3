#include<stdio.h>

void main()
{
    int n,di=2;
    scanf("%d",&n);
    while(n>=di)
    {
        if(n%di==0)
        {
            n=n/di;
            printf("%d\n",di);
        }
        else
            di++;

    }
    printf("0");
}
