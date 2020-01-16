/**
@author Shivam Singhal 16-01-2020
singhal.shivam336@gmail.com
*/

#include<stdio.h>
#define SIZE 5
void main(){
	int i,j,temp,array[SIZE]={1,2,3,4,5},k;
	
	//Program to reverse all the element in the array
	for(i=0,j=SIZE-1;i<j;i++,j--){
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;
	}	
	
	for(k=0;k<SIZE;k++){
		printf("%d\n",array[k]);
	}
}
