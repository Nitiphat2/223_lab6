#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m][n],i,j,k;
    for(i=0;i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum = sum + a[i][j];
        }
    }
    int o=n*m;
    sum = round(sum/o);
    for(i=0;i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]<sum)
            {
                k = k+(sum - a[i][j]);
            }
            if(a[i][j]>sum)
            {
                k = k-(a[i][j] - sum);
            }
        }
    }
    if(k<0)
    {
        printf("%d",k*-1);
    }
    else
    {
        printf("%d",k);
    }
}
