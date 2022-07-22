#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\n1.to check isosceles triangle");
    printf("\n2.to check a right angle triangle");
    printf("\n3.to check a equilateral triangle");
    printf("\nenter a cse you want to check");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("enter three sides of triangle");
            scanf("%d%d%d",&b,&c,&d);
            if(b==c||c==d||d==b)
                printf("this is a isosceles triangle");
            else 
                printf("this is not a isosceles triangle");
                break;

        }
        case 2:
        {
            printf("enter three sides of triangle");
            scanf("%d%d%d",&b,&c,&d);
            if(b*b==c*c+d*d||c*c==b*b+d*d||d*d==c*c+b*b)
                printf("this is a right angle triangle");
            else
                printf("this is not a right angle triangle");
                break;
        }
        case 3:
        {
            printf("enter three sides of triangle");
            scanf("%d%d%d",&b,&c,&d);
            if(b==c==d)
                printf("this is a equilateral triangle");
            else
                printf("this is not a equilateral triangle ");
                break;
        }
        default:
            printf("invalid choice");
            break;
    }
}