#include<stdio.h>

void main()
{
    int n,di=2;
    scanf("%d",&n);
    if(n==1)
        printf("1\n");
    else
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
