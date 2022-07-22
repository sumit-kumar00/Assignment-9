#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("have a nice day");
        break;
    case 2:
        printf("have a good day");
        break;
    case 3:
        printf("all the best");
        break;
    case 4:
        printf("achive your goals");
        break;
    case 5:
        printf("always shine");
        break;
    case 6:
        printf("boost mood");
        break;
    case 7:
        printf("take rest");
        break;
    
    default:
        printf("invalid number");
        break;
    }
}