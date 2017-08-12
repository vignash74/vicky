#include<stdio.h>
void main()
{
int a;
printf("Enter the number; ");
scanf("%d",&a);
if (a>0)
printf("The number is positive ");
else(a<0)
printf("The number is negative ");
else(a==0)
printf("The number is equal to zero");
getch();
}
