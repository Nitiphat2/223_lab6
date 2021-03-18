#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[n][100],na[n][100];
    int i,j,k;
    for(i=0; i<n; i++)
    {
        scanf("%s",name[i]);
    }
    char h[100]="";
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(strcmp(name[j],name[j+1])!=1)
            {
                strcat(h,name[j]);
                strcpy(name[j],"");
                strcat(name[j],name[j+1]);
                strcpy(name[j+1],"");
                strcpy(name[j+1],h);
            }
            strcpy(h,"");
        }
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
