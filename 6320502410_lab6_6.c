#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j,k,l;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            a[i][j]=0;
        }
    }
    char m[250];
    scanf(" %s",m);
    j=0;
    k=0;
    a[0][0]=1;
    for(i=0; i<strlen(m); i++)
    {
        if(m[i] == 'U')
        {
            a[j-1][k]=1;
            j--;
        }
        else if(m[i] == 'D')
        {
            a[j+1][k]=1;
            j++;
        }
        else if(m[i] == 'L')
        {
            a[j][k-1]=1;
            k--;
        }
        else if(m[i] == 'R')
        {
            a[j][k+1]=1;
            k++;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d",a[i][j]);
        }
    }
    /*for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j] == 1)
            {
                if(a[i-1][j]==1 || a[i+1][j]==1)
                {
                    if(a[i][j+1]==1 || a[i][j-1]==1)
                    {
                        printf("+");
                    }
                    else
                    {
                        printf("|");
                    }
                }
                else if(a[i][j+1]==1 || a[i][j-1]==1)
                {
                    if(a[i-1][j]==1 || a[i+1][j]==1)
                    {
                        printf("+");
                    }
                    else
                    {
                        printf("-");
                    }
                }
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }*/
}
