#include <stdio.h>

double getAverage(int arr[],int size);

int main(){
	int balance[5]={1000,2,3,17,50};
	int avg;
	
	avg=getAverage(balance,5);
	
	printf("Average value of array is: %d",avg);
	
	return 0;
}

double getAverage(int arr[],int size){
	int i;
	int result=0;
	for(i=0;i<=size;i++){
		result+=arr[i]; //(n+1 compare) , (2n+2) total , T(n)=(3n+4)
	}
		return (result/size);
}
