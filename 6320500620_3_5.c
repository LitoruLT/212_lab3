#include<stdio.h>

void main()
{
    int n,di=2,i=0;
    scanf("%d",&n);
    int num[3],stn=n;
    while(n>=di)
    {
        if(n%di==0)
        {
            n=n/di;
            i++;
            num[i]=di;

        }
        else
            di++;
    }
    if(i==3 && num[0] != num[1] && num[0] != num[2] && num[1] != num[2])
        printf("%d is a Lucky Number.",stn);
    else
        printf("%d is not a Lucky Number.",stn);


}
