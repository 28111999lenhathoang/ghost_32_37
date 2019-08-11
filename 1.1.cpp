#include<stdio.h>
int tim_max(int a[], int n){
	int max = a[0];
	for(int i = 0 ; i < n ; ++i){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}
void in_mang_sap_xep(int a[],int n){
	for(int i = 0 ; i < n -1 ; ++i){
		for ( int j = 0 ; j < n - i - 1 ; ++j){
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nmang sau khi sap xep la : \n");
	for(int i = 0; i < n; ++i){
		printf("%4d",a[i]);
	}
}
int tim_hang_co_gt_max(int a[][4],int n){
	int max ; 
	int vi_tri = 0;
	for(int i = 0; i < n ; ++i){
		int tong = 0;
		for(int j = 0 ; j < 4 ; j++){
			tong += a[i][j];
		}	
			if(i == 0 ){
				max = tong;
			}
			if(max < tong){
				tong = max ;
				vi_tri = i;
			}
		}
	return vi_tri;

}
int main(){
	int x[5] = {1, 2, 4, 9, 8};
	int a[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	printf("so lon nhat : %d",tim_max(x,5));
	in_mang_sap_xep(x,5);
	printf("\n hang co gia tri lon nhat la %d",tim_hang_co_gt_max(a,4));
	return 0;
}
