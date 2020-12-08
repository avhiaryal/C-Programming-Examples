//Simple Calculator
#include<stdio.h>
#include<conio.h>

void main()
{
int x,y,sum,diff,product,divide;
printf("Enter the first number: ");
scanf("%d",&x);
printf("Enter the second number: ");
scanf("%d",&y);
sum = x + y;
diff = x - y;
product = x * y;
divide = x / y;
printf("sum = %d\n",sum);
printf("difference = %d\n",diff);
printf("product = %d\n",product);
printf("divide = %d\n",divide);
getch();
}
