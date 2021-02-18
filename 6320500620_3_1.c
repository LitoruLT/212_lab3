#include<stdio.h>

void main()
{
    int n=5,k,i,j=4,num[5]={0,0,0,0,0};
    int get=0;
    for(i=0 ; i<n ; i++)
    {
        for(k=0 ; k<j ; k++)
        {
            scanf("%d ",&get);
            num[i]=num[i]+get;
        }
    }
    int score[5],max=num[0];
    int winner=0;

    for(i=0 ; i<n ; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            winner=i;
        }
    }

    printf("%d %d",winner+1,num[winner]);
}
