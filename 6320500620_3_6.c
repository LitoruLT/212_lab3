#include<stdio.h>

unsigned long firststep(unsigned long n)
{

    unsigned long check,i,ntc;
    char ans='F';
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

    return check+1;
}


void main()
{
    unsigned long n,num,mul=10,tmp=0;
    scanf("%lu",&n);
    char ispalin='F';
    while(ans=='F')
    {
        n=firststep(n);
        num=n;
        while(num)
        {
            num=num/mul;
            tmp++;
        }
        unsigned long tocheck[tmp];
        num=n;
        while(num)
        {
            tocheck[tmp-1]=num%mul
            num=num/mul;
            tmp=tmp-1
        }


    }


}
