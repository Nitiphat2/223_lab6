#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j,k,l;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    char k[250];
    scanf(" %s",k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
}
