#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;

    default:
        printf("invalid");
        break;
    }
}