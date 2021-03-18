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
    char h[100]="5a";
    printf("\n");
    for(i=0; i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(strcmp(name[i],name[j+1])<0)
            {
                printf("%d %d\n",i,strcmp(name[i],name[j+1]));
                strcpy(h,name[i]);
                strcpy(name[i]," ");
                strcpy(name[i],name[i+1]);
                strcpy(name[i+1]," ");
                strcpy(name[i+1],h);
            }
            strcpy(h," ");
        }
        printf("%s\n",name[i]);
    }
}
