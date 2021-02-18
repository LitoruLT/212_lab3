#include<stdio.h>

void main()
{

    unsigned long n,check,i,ntc;
    char ans='F';
        scanf("%lu",&n);
    check=n;
    while(ans!='T')
    {
        for(i=2; i<check ; i++)
        {
            for(ntc=2; ntc<i ; ntc++)
            {
                if(ntc*ntc<=i && i%ntc!=0)
                {
                    continue;
                }
                else
                    {
                        i++;
                        break;
                    }
            }
            if(i*i<=check && check%i==0)
            {
                ans='F';
                break;
            }
            else
                ans='T';
        }
        check=check-1;
    }
    printf("%lu",check+1);

}
