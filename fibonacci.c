#include <stdio.h>
#include <conio.h>

int fib(int);
int main( void ){
	int x;
	printf("first n numbers add>");
	scanf("%d",&x);
	printf("fibonacci:&d",fib(x));
	getchar();
}
int fib(int x){
	int result=1;
	int i;
	for(i=1;i<=x;i++){
	result +=i;
}
 	return 0;
}
