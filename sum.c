#include<stdio.h>
#include<math.h>
void main()
{int n,i,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i%2==0)
sum=sum+i;}
printf("%d",sum);
}