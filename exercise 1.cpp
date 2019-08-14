#include<stdio.h>
int Calculate_sum(int a, int b){
	return a+b;
}
int Calculate_substraction(int a,int b){
	return a-b;
}
int Calculate_multiplication(int a , int b){
	return a*b;
}
int Calculate_division(int a, int b){
	return a/b;
}

int main(){
	int a,b;
	int choose = 0;
	printf("Nhap a :");
	scanf("%d",&a);
	printf("Nhap b :");
	scanf("%d",&b);
	do{
		printf("\n                         *** LIST PROGRAMS: \n");
		printf("1 -  Funciton to calculate sum of 2 integers. \n");
		printf("2 -  Funciton to calculate substraction of 2 integers. \n");
		printf("3 -  Funciton to calculate multiplication of 2 integers. \n");
		printf("4 -  Funciton to calculate division of 2 integers. \n");
		printf("--- --- ---\n");
		printf("Choose : "); scanf("%d", &choose);
	switch(choose){
		case 1: 	printf("Calculate sum : %d",Calculate_sum(a,b));break;
		case 2:		printf("Calculate substraction : %d",Calculate_substraction(a,b));break;
		case 3:		printf("Calculate multiplication : %d",Calculate_multiplication(a,b));break;
		case 4:		printf("Calculate division : %d",Calculate_division(a,b));break;
		default : 	printf("Exit");break;
		}
	}
	while(choose != 0);
}
