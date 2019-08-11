#include<stdio.h>
int main(){
	int m,n;
	printf("m : ");
	scanf("%d",&m);
	printf("n : ");
	scanf("%d",&n);
	int arr[m][n];
	double tb_cong;
	for(int i = 0 ; i < m ; ++i){
		for(int j = 0 ; j < n ; ++j){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int tong = 0;
//	for(int i = 0 ; i < m ; ++i){
//		for(int j = 0 ; j < n ; ++j){
//			if(i==j){
//			tong += arr[i][j];
//			tb_cong = (double)tong/4;
//		}
//	}
//	}
	for(int i = n-1; i > 0 ; --i){
		for(int j = 0 ; j < n ; ++j){
			tong += arr[i][j];
			tb_cong = (double)tong/4;
		}
	}
	
	printf("trung binh cong duong cheo : %0.3lf\n",tb_cong);		
	printf("tong  : %d\n",tong);		
	return 0;	
}
