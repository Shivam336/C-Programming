/**

@author Shivam Singhal  16-1-2020
singhal.shivam336@gmail.com

*/
#include<stdio.h>
#define SIZE 5
void main(){
	int array[SIZE]={1,2,3,4,5};

	//Program to search the element in the array using Linear Search
	int num,i;
	printf("Enter the element which need to search: ");
	scanf("%d",&num);
	for(i=0;i<SIZE;i++){
		
		if(array[i]==num){
			printf("Element is found at %d",i);
			break;
		}
	}

	if(i==SIZE){
		printf("Element not found");
	}
}
