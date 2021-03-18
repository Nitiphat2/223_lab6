#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        a[i]=0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&j,&k);
        a[j-1]++;
        a[k-1]++;
    }
    int max=a[0],min=a[0];
    for(i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
        if(min > a[i])
        {
            min = a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(max == a[i])
        {
            printf("%d ",i+1);
        }
    }
    for(i=0; i<n; i++)
    {
        if(min == a[i])
        {
            printf("%d",i+1);
        }
    }
}
