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
    printf("%d",strcmp(name[0],name[1]));
}
