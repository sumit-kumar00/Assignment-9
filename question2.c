#include<stdio.h>
int main()
{
    int a,b,x;
    
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\nchoose any one option");
    scanf("%d",&x);
    while(1)
        {
            switch (x)
            {
            case 1:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("\naddition of two number is %d",a+b);
                break;
            case 2:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("\nsubtraction of two number is %d",a-b);
                break;
            case 3:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("\nproduct of two number is %d",a*b);
                break;  
            case 4:
                printf("enter two number");
                scanf("%d%d",&a,&b);
                printf("\ndivision of two number is %d",a/b);
                break;  
            case 5:
                break;
                
            default:
            printf("invallid choice");
                break;
            }
            if(x==5)
                break;
        }
}
