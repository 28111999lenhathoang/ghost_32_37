/*
	1. tím so lon nhat trong mang
	2. in ra mang da sap xep
	3. tim hang co tong gia tri lon nhat trong ma tran 4*4
	4. tim so gan lon nhat trong mang
*/
#include<stdio.h>
void in_so_lon_nhat(){
  	int n;
	printf("nhap so phan tu trong mang n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i<n ; ++i ){
		printf("nhap phan tu thu arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i = 0 ; i<n ; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("gia tri lon nhat trong mang max : %d\n",max);
}
void in_mang(){
	int n;
	printf("\n nhap vao so phan tu n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		printf("nhap phan tu thu arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
		printf("mang vua nhap la : ");
	for(int i = 0; i < n ; ++i){
		printf("%3d",arr[i]);
	}
	for( int i = 0 ; i < n-1 ; i++){
		int temp = 0;
		for(int j = n-1 ; j>i ; j-- ){
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;	
			}
		}
	}
	printf("\nmang sau khi sap xep la : ");
	for(int i = 0 ; i<n ; i++){
		printf("%d ",arr[i]);
}
}
void in_ra_hang_co_gt_max(){
	int m,n;
	int max = 0;
	int x = 0;
	printf(" nhap so hang cua ma tran m = ");
	scanf("%d",&m);
	printf(" nhap so cot cua ma tran n = ");
	scanf("%d",&n);
	int arr[m][n];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; ++j){
			printf("nhap phan tu thu arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("ma tran vua nhap la : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; ++j){	
		printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	for(int i = 0 ; i < m ; ++i){
			int tong = 0;
		for(int j = 0 ; j < n ; ++j){
			tong += arr[i][j];
		}
		if(i == 0){
			max = tong;
			x == i;
		}
		if(max < tong ){
			max = tong ;
			x = i;	
		}
	}
	printf("hang %d co gia tri lon nhat la : %d",x,max);
}
void gt_max2(){
	int m;
	printf("nhap so phan tu cua mang m = ");
	scanf("%d",&m);
	int arr[m];
	for(int i = 0 ; i < m ; ++i){
		printf("phan tu thu arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i = 0 ; i < m ; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	int max2 = arr[0];
	for(int i = 0 ; i < m ; ++i){
		if(max2< arr[i] && arr[i] < max){
			max2 = arr[i];
		}
	}
	printf("Mang vua nhap la : \n");
	for(int i = 0 ; i < m ; i++){
		printf("%4d",arr[i]);
	}
	printf("\n");
	printf("gia tri lon thu 2 trong mang la : %d",max2);

}
int main(){
	int choose = 0;
		do{
		printf("\n                         *** DANH SACH CHUONG TRINH: \n");
		printf("1 - Tim phan tu lon nhat trong mang. \n");
		printf("2 - In ra mang da sap xep. \n");
		printf("3 - Tim hang co tong gia tri lon nhat trong ma tran 4x4. \n");
		printf("4 - Tim phan tu gan lon nhat trong mang. \n");
		printf("--- --- ---\n");
		printf("Chon bai so : "); scanf("%d", &choose);
		switch(choose){
			case 1 : in_so_lon_nhat();
						break;
			case 2 : in_mang();
						break;
			case 3 : in_ra_hang_co_gt_max();
						break;
			case 4 : gt_max2();
						break;
			default : printf("ket thuc chuong trinh!!!");
						break;
		}
	}
	while(choose != 0);
	return 0;
}
