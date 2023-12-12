#include<stdio.h>
#include<math.h>
void main()
{int i;
for(i=1;i<=100;i++)
{
    if (i%3==0)
    {
        printf("Fizz \n");
    }
    if (i%5==0)
    {
         printf("Buzz \n");
    }
    if (i%5==0 && i%3==0)
    {
         printf("FizzBuzz \n");
    }
    else
    { printf("%d \n",i);}
}

}