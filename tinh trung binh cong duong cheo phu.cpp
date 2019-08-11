#include<stdio.h>
int main(){
	int arr[4][4];
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 4 ; ++j){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0 ; i < 4 ; ++i){
		for(int j = 0 ; j < 4 ; ++j){
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}
	int tong = 0 ;
	double tb_cong; 
	for(int i = 0 ; i<4 ; i++){
		for(int j = 0; j < 4 ; ++j){
			if(i + j == 3){
				tong += arr[i][j];
				tb_cong = (double)tong/4;
			}
		}
	}
	printf("%d : ",tong);
	printf("tb_cong : %0.3lf",tb_cong);
	
	return 0;
}
