#include<stdio.h>
int main()
{
    int units,a,b;
    printf("\nif units are less than 50 than select 50\n");
    printf("\nif units are less than 100 than select 100\n");
    printf("\nif units are less than 150 than select 150\n");
    printf("\nif units are less than 200 than select 200\n");
    printf("enter case");
    scanf("%d",&b);
    switch(b)
    {case 50:
     { 
         printf("enter number of units");
         scanf("%d",&units);
       a=units*0.50;
       printf("amount to be paid is %d",a);
       break;
     }
     case 100:
     {
        printf("enter number of units");
         scanf("%d",&units);
       
        a=units*0.75;
        printf("amount to be paid is %d",a);
        break;
     }
     case 150:
     {
        printf("enter number of units");
         scanf("%d",&units);
        a=units*1.20;
         printf("amount to be paid is %d",a);
         break;
     }
     case 200:
     {
        printf("enter number of units");
         scanf("%d",&units);
        a=units*1.50;
       
         printf("amount to be paid is %d",a);  
         break;
     }
     default:
        printf("invalid amount");
        break;
    }

}