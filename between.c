#include <stdio.h>
#include <conio.h>

int main( void ){
	int number;
	printf("Please enter your number>");
	scanf("%d",&number);
	if(number>18&&number<65)
		printf("your number between 18 n 65");
	else
		printf("your number doesn`t between 18 n 65");
	return 0;	
}
