#include <stdio.h>
#include <conio.h>

int main( void ){
	int x,y,z;
	printf("Enter your first number >");
	scanf("%d",&x);
	printf("Enter your second number >");
	scanf("%d",&y);
	printf("Enter your third number >");
	scanf("%d",&z);
	if(x>y&&x>z)
		printf("%d",x);
	else if(y>x&&y>z)
		printf("%d",y);
	else
	 	printf("%d",z);
		 return 0;		
}
