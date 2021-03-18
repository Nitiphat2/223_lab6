#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[n][100],na[n][100];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    int h=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(strcmp(name[i],name[j+1])<0)
            {
                h=j+1;
            }
        }
    }
}
