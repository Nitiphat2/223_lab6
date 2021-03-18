#include<stdio.h>
int main()
{
    int n,q,i,j,k,l,m,count=0;
    scanf("%d%d",&n,&q);
    char u;
    int h[n],max,v[q];
    for(i=0;i<n;i++)
    {
        h[i]=0;
    }
    for(i=0;i<q;i++)
    {
        scanf(" %c",&u);
        scanf(" %d",&j);
        scanf(" %d",&k);
        if(u == 'U')
        {
            h[j-1]=k;
        }
        else if(u == 'P')
        {
            max =0;
            for(l=j-1;l<k;l++)
            {
                if(max<h[l])
                {
                    max=h[l];
                }
            }
            v[count]=max;
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n",v[i]);
    }
}
