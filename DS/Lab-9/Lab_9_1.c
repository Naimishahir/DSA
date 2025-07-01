#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr = (int *)malloc(sizeof(int));
    char *ptr2 = (char *)malloc(sizeof(char));
    float *ptr3 = (float *)malloc(sizeof(float));

    if(ptr && ptr2 && ptr3)
    {
        *ptr = 8;
        *ptr2 = 'N';
        *ptr3 = 12.52;

        printf("%d\n",*ptr);
        printf("%c\n",*ptr2);
        printf("%f",*ptr3);
    }
    else
    {
        printf("Memory not allocate");
    }

    free(ptr);
    free(ptr2);
    free(ptr3);

}