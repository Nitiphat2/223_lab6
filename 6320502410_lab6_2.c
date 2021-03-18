#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    scanf("%d",&n);
    char n1[n],n2[n];
    scanf(" %s",n1);
    scanf(" %s",n2);
    for(i=0;i<n;i++)
    {
        if(n1[i]==n2[i])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    printf("%d %d",j,k);
    return 0;
}
