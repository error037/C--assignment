#include<stdio.h>
int main()
{
char c;
printf("enter a character");
scanf("%c",&c);
int a;
printf("enter a number");
scanf("%d",&a);
for (int i=1;i<=a;i++)
printf("%c",c);
return 0;
}

