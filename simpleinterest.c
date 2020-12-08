#include<stdio.h>
#include<conio.h>
void main()
{
    int p,t;
    float r,si;
    printf ("enter principle: ");
    scanf("%d",&p);
    printf ("enter time: ");
    scanf("%d",&t);
    printf ("enter rate: ");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("simple interest is =%f",si);
    getch();
}

