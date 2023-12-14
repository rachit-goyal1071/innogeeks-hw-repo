#include<stdio.h>

int main()
{
    int i,sum=0,num;
    printf("Enter the num : ");
    scanf("%d",&num);

    for(i=2; i<=num; i+=2){   // i+=2 for addition of 2 =

         sum += i;

    }
    printf("%d",sum);

    
    return 0;

}
