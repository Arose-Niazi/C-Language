#include <stdio.h>

int main()
{
    int arr[10]={2,6,-4,8,10,-12,14,16,18,20},i,*ptr=arr;
    printf("arr[i]\n");
    for(i=0; i<10; i++) printf("%d   ",arr[i]);
    printf("\n\nptr[i]\n");
    for(i=0; i<10; i++) printf("%d   ",ptr[i]);
    printf("\n\n*(arr+i)\n");
    for(i=0; i<10; i++) printf("%d   ", *(arr+i));
    printf("\n\n*(ptr+i)\n");
    for(i=0; i<10; i++) printf("%d   ", *(ptr+i));
    printf("\n\n*ptr\n");
    for(i=0; i<10; i++,ptr++) printf("%d   ",*ptr);
    return 0;
}
