#include<stdio.h>
void main()
{
    int b;
    printf("Enter the year\n");
    scanf("%d",&b);
    if(b%4==0)
    printf("It is a leap year");
    else
    printf("It is not a leap year");
}
