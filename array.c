#include <stdio.h>
#include <math.h>
void main() 
{
    int a[3][3],b[3][3],c[3][3],i,j,n;
    for (i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        { scanf("%d",&a[3][3]);}
         for(j=0;j<=i;j++)
        { scanf("%d",&b[3][3]);}
         for(j=0;j<=i;j++)
         { c[3][3]=a[i][j]+b[i][j];}
         printf("%d",c[3][3]);
    }
}