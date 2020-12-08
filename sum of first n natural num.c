//for loop:2 Program to calculate the sum of first n natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int num,count,sum =0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum=sum+count; //sum += count;
    }
    printf("Sum = %d", sum);

    }
