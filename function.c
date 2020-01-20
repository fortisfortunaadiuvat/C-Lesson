#include <stdio.h>

int maximum(int num1,int num2);

int main(){
	int number1,number2,result;
		printf("Enter your numbers> ");
		scanf("%d%d",&number1,&number2);
	
	result=maximum(number1,number2);
		printf("Max is: %d",result);
}

int maximum(int num1,int num2){
	int total;
	
	if(num1>num2)
		total=num1;
		
	else 
		total=num2;
		
	return total;		
}
