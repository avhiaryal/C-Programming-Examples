#include <stdio.h>
#include <conio.h>

void main()
{
	char name[10], add[20];
	printf("Enter your name\n");
	scanf("%s", &name);
	printf("Enter your address\n");
	scanf("%s", &add);
	printf("Your name is %s\n", name);
	printf("Your address is %s\n", add);
	getch();
}
