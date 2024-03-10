#include<stdio.h>
#include<limits.h>
int main(void)
{	
       printf("------------------------------------------------\n");
    printf("Data Type   FS     Size    range        \n");
    printf("------------------------------------------------\n");
    printf("\n int %%d %d   %d to %d",sizeof(int), INT_MIN, INT_MAX); 
    printf("\n short int %%hd %d  %hd to %hd", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n signed char %%c  %d %d to %d", sizeof(char), SCHAR_MIN, SCHAR_MAX);
 return 0;
}
