#include<stdio.h>
int main(){
	int arr[4][3];
	int brr[3][4];
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMa tran vua nhap la : \n");
	for(int i = 0 ; i<4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 3 ; ++j){
//			int temp = arr[i][j];
//			arr[i][j] = arr[j][i];
			brr[j][i] = arr[i][j];
		}
	}
	printf("Ma tran chuyen vi : \n");
	for(int i = 0 ; i < 3 ; ++i){
		for(int j = 0 ; j < 4 ; ++j){
		printf("%5d",brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
