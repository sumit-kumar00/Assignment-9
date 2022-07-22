#include<stdio.h>
int main()
{
    int a,b;
   
    printf("\ncase1.if you enter a even number");
    printf("\ncase2.if you enter a odd number");
    printf("\nenter your choice");
    scanf("%d",&b);
    switch (b)
    {
    case 1:
      {

         printf("enter a number");
         scanf("%d",&a);
        if(a>=1)
         {   printf("-%d",a);
            break;}
        if(a<=0)
          printf("+%d",a);
          break;
      }

        
        
        
    
    default:
     printf("invalid choice");
        break;
    }
}