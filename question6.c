#include<stdio.h>
int main()
{
    int year,y;
    printf("enter a year");
    scanf("%d",&year);
    y=year%400==0||year%100==0||year%4==0;
    switch(y)
    {
        case 1:
          printf("%d is a leap year\n",year);
          break;
        case 2:
        printf("%d is not a leap year",year);
         break;
        default:
         printf("%d is not a leap year",year);
    }
}