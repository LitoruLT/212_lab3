#include<stdio.h>

void main()
{
    int n=0,i,k;
    scanf("%d",&n);
    long int p,a,getinfo[2];
    int time[48]={0};
    for(i=0 ; i<n ; i++)
    {
        for(k=0; k<2 ; k++)
            scanf("%li",&getinfo[k]);
        p=getinfo[0];
        a=getinfo[1];
        time[p-1]=time[p-1]+a;
    }
    long int max=time[0],ans=0;
    for(i=0 ; i<n ; i++)
    {
        if(time[i]>max)
        {
            max=time[i];
            ans=i;
        }
    }
    printf("%li %li",ans+1,max);

}
