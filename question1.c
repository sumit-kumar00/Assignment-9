#include<stdio.h>
int main()
{
    int number;
    printf("enter a  number");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf("number of days in january are 31");
        break;
    case 2:
        printf("number of days in feburary are 28");
        break;
    case 3:
        printf("number of days in march are 31");
        break;
    case 4:
        printf("number of days in april are 30");
        break;
    case 5:
        printf("number of days in may are 31");
        break;
    case 6:
        printf("number of days in june are 30");
        break;
    case 7:
        printf("number of days in july are 31");
        break;
    case 8:
        printf("number of days in augest are 31");
        break;
    case 9:
        printf("number of days in september are 30");
        break;
    case 10:
        printf("number of days in october are 31");
        break;
    case 11:
        printf("number of days in november are 30");
        break;
    case 12:
        printf("number of days in december are 31");
        break;

    
    
    default:
        printf("wrong number");
        break;
    }
}