//Program to print the even number from 1 to 10
#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 1;
    while (i<=10)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i=i+1 ; //++i
    }
    getch();
}
