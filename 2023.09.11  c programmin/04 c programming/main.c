#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arr[];
    int size;
    int tot=0;
    for(i=0;i<size;i++)
    {
        tot=arr[i];
    }
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int tot = int calculate_tot(arr,size);

    printf("Total is %d.\n", tot);

    return 0;
}
