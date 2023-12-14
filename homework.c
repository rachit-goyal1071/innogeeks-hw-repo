#include<stdio.h>

//Question 1
// int main()
// {
//     int i,sum=0,num;
//     printf("Enter the num : ");
//     scanf("%d",&num);

//     for(i=2; i<=num; i+=2){   // i+=2 for addition of 2 =

//          sum += i;

//     }
//     printf("%d",sum);

    
//     return 0;

// }

// Question2


int main()
{
    int num;
    printf("Enter the num : ");
    scanf("%d",&num);

        if(num%3==0)
        printf("Fizz");
        
        else if (num%5==0)
        printf("Buzz");

        else if(num%3==0 && num%5==0 )
        printf("FizzBuzz");

        else
        printf("Entry is other than 3 and 5 which is : %d ",num);
        
    return 0;
}

