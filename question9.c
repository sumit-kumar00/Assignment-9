#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 1");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    {    
        printf("enteer a even number");
        scanf("%d",&b);
        if(b%2==0)
        {
            b++;
            printf("%d",b);
             break;
        }
       
        else
        {
            printf("enter only even number");
            break;
        }
    }
    default:
     printf("invalid number");
        break;
    }
}