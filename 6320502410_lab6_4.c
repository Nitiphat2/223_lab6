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
    j=0;
    k=0;
    for(i=0; i<n; i++)
    {
        if(max <= a[i])
        {
            if(max == a[i])
            {
                if(j>i)
                {
                    j=i;
                }
            }
            else if(max < a[i])
            {
               max = a[i];
               j=i;
            }
        }
        if(min >= a[i])
        {
            if(min == a[i])
            {
                if(k>i)
                {
                    k=i;
                }
            }
            else if(min > a[i])
            {
               min = a[i];
               k=i;
            }
        }
    }
    printf("%d ",j+1);
    printf("%d",k+1);
    return 0;
}
