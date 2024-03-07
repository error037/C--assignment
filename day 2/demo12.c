#include<stdio.h>

//Logical Opeartor  -> &&  ||  !

int main()
{
	int a = 10;
	int b = 20;
	/*
	int x = a && b; //
	printf("x = %d \n",x);//1

	printf("x = %d \n",10 && 20);//1
	printf("x = %d \n",10 && 00);//0
	printf("x = %d \n",0  && 10);//0
	printf("x = %d \n", a = 10 && b = 0 );// 0
	printf("x = %d \n", a && !b  );//
	//                 10 && !0
	//                 10 && 1 -> True



	printf("x = %d \n", 1 || 0 );//1
	printf("x = %d \n", 1 || 1);//1
	printf("x = %d \n", 0 || 0);//0

	printf("x = %d \n", 0 || 1);//1
	*/
	a = 20,b = 30;
	printf("x = %d \n", (a = 10 ) &&  (b = 00 ) );//0
	printf("a = %d b = %d \n",a,b);   // a = 10 , b=0

	return 0;
}
