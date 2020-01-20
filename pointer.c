#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a=10;
	int *p=(int*)malloc(sizeof(int)*10);
	p[180]=4;
	
	
	printf("%d",p[180]);
} 
