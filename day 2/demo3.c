#include<stdio.h>

/*
 To print the size of any data type use - sizeof operator
    - stantax : sizeof(int)
*/

int main()
{
	int n1;
	char c1;
	float f1;
	double d1;

	printf("int size : %u \n ",sizeof(n1));
	printf("Char size : %u \n ",sizeof(c1));
	printf("float size : %u \n ",sizeof(f1));
	printf("Double size : %u \n ",sizeof(d1));

	printf("int size : %u \n ",sizeof( int ));
	printf("Char size : %u \n ",sizeof(char));
	printf("float size : %u \n ",sizeof(float));
	printf("Double size : %u \n ",sizeof(double));

	
	printf("int size : %u \n ",sizeof( 5 ));  // 4
	printf("Char size : %u \n ",sizeof( 'A' )); // 1 Or 4
	printf("float size : %u \n ",sizeof( 3.142f ) );//4 
	printf("float size : %u \n ",sizeof( 3.142 ) );//8 
	printf("Double size : %u \n ",sizeof( 8.56 )); // 8

	printf("sizeof(3.14 + 3.14) = %ld\n", sizeof(3.14 + 3.14)); //8

	printf("sizeof(c1 + d1) = %ld\n", sizeof(c1 + d1));//8
	printf("sizeof(c1 + n1) = %ld\n", sizeof(c1 + n1));//4

	printf("sizeof(3.14) = %ld\n", sizeof(3.14f)); // 4









	return 0;
}
