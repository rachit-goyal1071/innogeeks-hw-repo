//Question 1
// #include<stdio.h>
// int main()
// {
// 	int n,i,sum=0;
// 	printf("Enter a number:");
// 	scanf("%d",&n);
// 	for(i=0;i<=n;i=i+2)
// 	{
// 		sum=sum+i;
// 	}
// 	printf("The sum of even numbers till %d is : %d",n,sum);
// 	return 0;
// }







// Question 2
// #include<stdio.h>
// int main() {  
//     int i; 
//     for(i=1; i<=100; i++) {
//         if(i%3==0)
//         {
//             printf("Fizz\n");
//         }
//         else if (i%5==0)
//         {
//             printf("Buzz\n");
//         }
//         else if(i%3==0 && i%5==0)
//         {
//             printf("FizzBuzz\n");
//         }
//         else
//         {
//             printf("%d",i);
//         }
//     }
//     return 0;  
// }








//Question 3 Diamond


// #include<stdio.h>

// int main(){
//     int i,j,space,rows;
    
//     printf("Enter the rows :");
//     scanf("%d",&rows);
    
//     for(i=1; i<=rows; i++)
//     {
//         for(space=1; space<=rows-i; space++)
//         {
//             printf(" ");
//         }
//         for(j=1; j<=i; j++)
//         {
//             printf("* ");
            
//         }
//         printf("\n");
//     }
//     for(i=rows; i>=1; i--)
//     {
//         for(space=1; space<=rows-i; space++)
//         {
//             printf(" ");
//         }
//         for(j=1; j<=2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }









//Question 4 Pattern   date--> 23/01/2024

// #include<stdio.h>

// int main()
// {
//     int i,j;
    
//     for(i=1; i<=5; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             if((i+j)%2==0)
//             {
//                 printf("1");
//             }
//             else
//             {
//                 printf("0");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }







//Question 5 Pattern date-->23/01/2024

// #include<stdio.h>

// int main()
// {
//     int n,number=1;
    
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);
    
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             printf("%d",number);
//             number++;
//         }
//         printf("\n");
//     }
// return 0;
// }