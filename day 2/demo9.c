#include<stdio.h>

int main()
{
	int a = 10;  //sign integer
	unsigned int b = 100; // unsighn integer
	short int c = 150;//short integer
	long int d = 200; //long integer

	printf("sign %d  unsighn = %u short = %hd long = %ld \n",a,b,c,d);

 	char c1 = 65;
	unsigned char c2 = -1;
	printf("c1 = %d  c2 = %u \n",c1,c2);//65  127

	char c3 = 130;
	printf("c3 = %d \n",c3);//-124
	unsigned char c4 =300;
	printf("c4 = %d \n",c4);//44
	return 0;
}
