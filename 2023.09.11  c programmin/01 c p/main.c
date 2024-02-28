#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,num4,num5, tot;

    printf("Enter number 01 :");
    scanf("%d",&num1);
    printf("Enter number 02 :");
    scanf("%d",&num2);
    printf("Enter number 03 :");
    scanf("%d",&num3);
    printf("Enter number 04 :");
    scanf("%d",&num4);
    printf("Enter number 05 :");
    scanf("%d",&num5);

    tot = num1+num2+num3+num4+num5;
    printf("Total value is %d",tot);
    return 0;
}
