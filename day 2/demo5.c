#include<stdio.h>

/*
  Escape Seq
  \n -> New Line
  \b -> Backslash
  \t -> Tab
  \r -> Carrage return
  \a -> alarm
  \v -> form feed
*/

int main()
{
	
	printf("\n-----------------------------------\n");
	printf(" \\n  = %d\n ",'\n');
	printf("Hello \n Sunbeam \n");
	printf("\n-----------------------------------\n");
	printf(" \\b = %d \n",'\b');
	printf("12344\b56\n");

	printf("\n-----------------------------------\n");

	printf(" \\t = %d \n",'\t');
	printf("\tHello\tDesd\n");
	printf("\n-----------------------------------\n");

	printf(" \\r = %d \n",'\r');
    printf("123456\r896\n");
	printf("\n-----------------------------------\n");
	printf(" \\a = %d , \\v = %d\n ",'\a','\v');
	return 0;
}

