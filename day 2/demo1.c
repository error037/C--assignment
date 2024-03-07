#include<stdio.h>

int main()
{
	int n1;
	char c1;
	float f1 ;
	double d1;

	printf("Enter Num : ");
	scanf("%d",&n1); // 10 Enter
	printf("Enter Char :" );
	scanf("%*c %c",&c1); //We use %*c Here to neglate one char so here we neglet enter
	printf("Enter Float : ");
	scanf("%f",&f1);

	printf("Enter Double : ");
	scanf("%lf",&d1);

	printf("num %d \n",n1);
	printf("Char %c \n",c1);
	printf("Float %f \n",f1);
	printf("Double %lf \n",d1);

	return 0;
}
