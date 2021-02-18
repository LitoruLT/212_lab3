#include<stdio.h>

void main()
{

    unsigned long long n,check,i;
    char ans='F';
        scanf("%llu",&n);
    check=n;
    while(ans!='T')
    {
        for(i=2; i<check ; i++)
        {
            if(check%i==0)
            {
                ans='F';
                break;
            }
            else
                ans='T';
        }
        check=check-1;
    }
    printf("%d",check+1);

}
