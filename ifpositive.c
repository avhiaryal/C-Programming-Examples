//Program to enter positive integer and find their sum, difference and product.
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,sum,diff,product;
    printf("Enter two positive integer : ");
    scanf("%d %d",&a,&b);
    if (a>0 && b>0)
    {
        sum = a+b;
        diff = a-b ;
        product = a*b;
        printf("The sum of two number is %d: \n",sum);
        printf("The difference of two number is %d: \n",diff);
        printf("The product of two number is %d: \n",product);
    }
    else
    {
        printf("You entered negative number\n");
        printf("Only positive number allowed");
    }
    getch();
}
