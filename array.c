#include<stdio.h>

int arrayabs(int [],int);

int main( void ){
	int i;
	int array[] = { -4, 8, -15, -16, 23, -42 };
	
	arrayabs(array,6);
	
	for( i = 0; i < 6; i++ ){
			printf( "%d\n", array[i] );  
	}
	printf("\n");
}
	
void arraysabs(int array[],int ds){
	int i;
	for(i=0;i<ds;i++){
		if(array[i]<0)
			array[i] *=-1;
	}
}	
