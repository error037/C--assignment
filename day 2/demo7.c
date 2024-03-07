#include<stdio.h>


//Width Specifier

int main()
{
	int num = 16;
	printf("num= %d \n",num);//16
	printf("Num = %10d \n",num); //Num = --------16
	//                                   0123456789
	printf("Num = %-10d \n",num);//Num = 16-------- 

	int j = 123456;
	printf("j = %3d \n",j);//j = 123456
	//                         012

	float f1 = 3.142;
	printf("f1 = %10f \n",f1);//-----3.142
	printf("f1 = %.2f \n",f1);//f1 = 3.14

	printf("f1 = %10.2f \n",f1);// ------3.14
	//                            0123456789
	return 0;
}











