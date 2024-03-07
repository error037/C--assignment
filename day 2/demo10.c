#include<stdio.h>

/*
	Typecasting - conversion of datatype
			- changing type of data


	- while performing arithmatic  one of datatye is promoted to higher datatype
	float + (float)int => float
	(int)char + int => int
	uint + (uint)int => uint

*/

int main()
{
	int a = 10;
	float f1 = 20.125;
/*
	int k = a + f1 ;
	//     10 + 20F ;     10.000 + 20.000  => 30.....
	printf(" k = %d \n",k);// 30
*/
	float k = a + f1 ;
	//     10 + 20F ;     10.000 + 20.000  => 30.....
	printf(" k = %f \n",k);// 30.00

	char c1 = 'A';
	k = c1 + f1 ;

	char c5 = 3.142f;

	float x = 5 / 2 ;
	printf(" x = %f \n",x );

     x = 5 / 2.0f;
	 x = (float)5 / 2 ;

	printf(" x = %f \n",x );

	// int res, num1 = 10, num2 = 3;
	// float res1;

	// res = num1 / num2;
	// printf("res = %d\n", res);

	// res1 = (float)num1 / num2;
	// printf("res1 = %f\n", res1);


	// res1 = 10/3.0;
	// printf("res1 = %f\n", res1);

	return 0;
}












