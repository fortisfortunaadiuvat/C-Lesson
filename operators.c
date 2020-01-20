#include <stdio.h>

int main(){
	char grade;
		printf("Enter your grade> ");
			scanf("%c",&grade);
	
	switch(grade){
		case 'a':
			printf("Excellent!\n");
			break;
		case 'b':
		case 'c':	
			printf("Well done!\n");
			break;
		case 'd':
			printf("Passed\n");
			break;
		case 'f':
			printf("Try again\n");
			break;				
	}			
	
	return 0;
}
