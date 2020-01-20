#include <stdio.h>
#include <conio.h>

void arraya(int [],int);

int main( void ){
	int i;
	int list[] = { -4, 8, -15, -16, 23, -42 };
	
	arraya(list,6);
	
	for( i = 0; i < 6; i++ ){
			printf( "%d\n", list[i] );  
	}
}
	
void arraya(int array[],int ds){
	int i;
	for(i=0;i<ds;i++){
		if(array[i]<0)
			array[i] *=-1;
	}
}	
