#include<stdio.h>

void main()
{

    unsigned long n,check,i,ntc;
    char ans='F';
        scanf("%lu",&n);
    check=n;
    if(check>3)
    {
    while(ans=='F')
    {
        if(check%2==0)
            check=check-1;
        for(i=2; i*i<check ; i++)
        {
            if(check%i!=0)
            {
                ans='T';
            }
            else
            {
                ans='F';
                break;
            }

        }
        check=check-1;

    }
    }
    else
    {
        check=check-1;
    }

    if(check>0)
        printf("%lu",check+1);


}
