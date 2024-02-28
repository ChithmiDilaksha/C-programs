#include <stdio.h>
#include <stdlib.h>

int main()
{
    int square1,square2,num1,num2,tot;

    printf("Enter number 01 : ");
    scanf("%d",&num1);
    printf("Enter number 02 : ");
    scanf("%d",&num2);

    square1=num1*num1;
    square2=num2*num2;
    printf("\nFirst number square is %d\n",square1);
    printf("Second number square is %d\n\n",square2);

    tot=square1+square2;
    printf("Total value is %d.\n\n",tot);

    return 0;
}
