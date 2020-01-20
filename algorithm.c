#include <stdio.h>

int search(int arr[],int max,int key);

int main(){
	int result;
	int searchkey=0;
	int maximum=3;
	int array[3]={1,2,3};
	
	result=search(array,maximum,searchkey);
		printf("Result sequence is: %d\n",result);
	
	return 0;
}

int search(int arr[],int max,int key){
	int low=0;
	int high=max-1;
	int mid=0;
	
	while(low<=high){
		mid=(low+high)/2;
			if(arr[mid]==key){
				return key;
		}
			if(arr[mid]>key){
				high=mid-1;
			}
			else
				low=mid+1;
	}
	
}
