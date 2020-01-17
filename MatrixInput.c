/**
This program take input for matrix and print in matrix form as in mathematics

@author Shivam Singhal  17-01-2020

*/
#include<stdio.h>
#define ROW 3
#define COL 4
void main(){
	int i,j,array[ROW][COL];
	printf("Enter element row wise:\n");
	for(i=0;i<ROW;i++)
	for(j=0;j<COL;j++)
	scanf("%d",&array[i][j]);
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
	printf("%d ",array[i][j]);
	}printf("\n");
}
}
