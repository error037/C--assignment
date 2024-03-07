#include<stdio.h>
/*
 incremet/ decrement
	Increment	=	 pre and post
	decrement	=	 pre and post

	- Both are unary operators
	- value of operand is modified
*/


int main()
{
	int a = 10;
	//++ pre increment
	 int k = ++a ; // k = 11
	 // k =  a + 1

	 // ++a  ->  a = a + 1
	 printf("a = %d k = %d \n",a,k);// 11 11

	//++ post increment
	 a = 10;
	 k = a++ ; //k = 10++
	 printf("a = %d k = %d \n",a,k);// 11 10
	
	 a = 5;
	 printf("a = %d \n",a++);//5
	 printf("a = %d \n",a);//6

	//printf("a = %d \n",5++);//Error -Lvalue Errror

	//-----------------------------------------------
	char res = 0, num = 8;
	printf("res = %d\tnum = %d\n", res, num);
	
	res = num--;	//	res = 8	num = 7
	//	res = num
	// num = num -1


	//res = --num;		// res = 7	num = 7
	//	num = num - 1
	// res = num


	//res = num++;	//res = 8	num = 9
	//	res = num
	//  num = num + 1

	
	
	//res = ++num;	//res = 9	num = 9
	//	step 1 : num = num + 1
	//	step 2 : res = num

	printf("res = %d\tnum = %d\n", res, num);
	return 0;
}







