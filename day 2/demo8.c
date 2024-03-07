#include<stdio.h>
int main()
{
    float f1 = 3.14;
 	int k = printf("f1 = %10.2f \n",f1);// ------3.14
    printf("k = %d \n",k);//17
  
    printf("k = %d \n",printf("f1 = %10.2f \n",f1));
    //      2nd print             1st print
	return 0;
}
