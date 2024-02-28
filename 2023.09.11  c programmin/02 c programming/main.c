#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2;

   printf("Enter number 01 : ");
   scanf("%d",&num1);
   printf("Enter number 02 : ");
   scanf("%d",&num2);

   if (num1>num2)
   {
       printf("The highest Number is %d.\n",num1);
   }
   else if(num2>num1)
   {
       printf("The highest Number is %d.\n",num2);
   }
   else
   {
       printf("Both numbers are equal\n.");
   }
    return 0;
}
